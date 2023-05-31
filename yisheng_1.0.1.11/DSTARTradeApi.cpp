#include "DSTARTradeApi.h"

#include <unistd.h>
#include <pthread.h>
#include <errno.h>
#include <fcntl.h>
#include <dirent.h>
#include <dlfcn.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <sys/poll.h>
#include <sys/epoll.h>
#include <sys/eventfd.h>
#include <string.h>
#include <stdlib.h>

#include <string>
#include <vector>

class ImpDSTARTradeApi : public DSTARTradeApi
{
public:
	explicit ImpDSTARTradeApi(const char *cfgpath);

	void Release();
	int  Init();
	int  Join();
	void RegisterFront(const char *FrontAddress);
	void RegisterSpi(IDstarTradeSpi *spi);
	void SubscribePrivateTopic(DSTAR_TE_RESUME_TYPE nResumeType);
	void SubscribePublicTopic(DSTAR_TE_RESUME_TYPE nResumeType);
	int ReqLastClientReqId();
	int ReqUserLogin(DstarApiReqLoginField *pReqUserLogin);
	int ReqAuthenticate(DstarApiReqUdpAuthField *pUdpAuth);
	int ReqOrderInsert(DstarApiReqOrderInsertField *pOrderInsert);
	int ReqOrderAction(DstarApiReqOrderDeleteField *pOrderAction);

protected:
	virtual ~ImpDSTARTradeApi() {}

private:
	IDstarTradeApi *api_;
	std::string ip_;
	int tcp_port_, udp_port_;
	int socket_;
	sockaddr_in svraddr_;
	std::string account_no_, password_;
	std::string app_id_, license_no_;

	void FillHead(DstarApiHead *head, DstarApiProtocolCodeType protocol, int field_count, int field_size);
	int Send(const char *buf, const int len);
	int SubmitSystemInfo();
};


using namespace std;

void split(const string& str, const string& del, vector<string>& v) {
  string::size_type start, end;
  start = 0;
  end = str.find(del);
  while(end != string::npos) {
    v.push_back(str.substr(start, end - start));
    start = end + del.size();
    end = str.find(del, start);
  }
  if (start != str.length()) {
    v.push_back(str.substr(start));
  }
}

DSTARTradeApi *DSTARTradeApi::CreateDSTARTradeApi() {
	ImpDSTARTradeApi *api = new ImpDSTARTradeApi("");
	return (DSTARTradeApi *)api;
}

ImpDSTARTradeApi::ImpDSTARTradeApi(const char *cfgpath) {
	// set up udp socket
	socket_ = ::socket(AF_INET, SOCK_DGRAM, 0);
	if (socket_ == -1) {
		printf("Failed to create socket!\n");
		return;
	}
	int x(fcntl(socket_, F_GETFL, 0));
	fcntl(socket_, F_SETFL, x | O_NONBLOCK);
	unsigned v = 1;
	setsockopt(socket_, SOL_SOCKET, SO_REUSEADDR, &v, sizeof(v));
	// fcntl(socket_, F_SETFL, x); // block mode
	
	// api initialize
	api_ = CreateDstarTradeApi();
	if (!api_) {
		printf("Failed to create dstar api\n");
	} else {
		printf("DSTAR API %s\n", api_->GetApiVersion());
	}
}

void ImpDSTARTradeApi::Release() {
	if (!api_) {
		printf("Release %p\n", api_);
		FreeDstarTradeApi(api_);
	}
}

int ImpDSTARTradeApi::Init() {
	// actually do nothing
	// do real init in ReqUserLogin
	return 0;
}

int ImpDSTARTradeApi::Join() {

	return 0;
}

void ImpDSTARTradeApi::RegisterFront(const char *FrontAddress) {
	printf("RegisterFront:%s\n", FrontAddress);
	vector<string> fields;
	split(FrontAddress, "//", fields);
	string front;
	if (fields.size() > 1) {
		front = fields[1];
	} else {
		front = fields[0];
	}
	fields.clear();
	split(front, ":", fields);
	if (fields.size() != 2) {
		printf("Invalid Front Address: %s\n", FrontAddress);
		return ;
	}

	string ip = fields[0];
	string ports  = fields[1];
	fields.clear();
	split(ports, ";", fields);
	if (fields.size() != 2) {
		printf("Invalid Front Address: %s\n", FrontAddress);
		return ;
	}

	string tcp_port = fields[0];
	string udp_port = fields[1];

	ip_ = ip;
	tcp_port_ = atoi(tcp_port.c_str());
	udp_port_ = atoi(udp_port.c_str());
	printf("register %s tcp:%d udp:%d\n", ip_.c_str(), tcp_port_, udp_port_);
	
	memset(&svraddr_, 0, sizeof(sockaddr_in));
	svraddr_.sin_family = AF_INET;
	svraddr_.sin_addr.s_addr = inet_addr(ip.c_str());
	svraddr_.sin_port = htons(udp_port_);
}

void ImpDSTARTradeApi::RegisterSpi(IDstarTradeSpi *spi) {
	if (api_) {
		api_->RegisterSpi(spi);
	}
}

void ImpDSTARTradeApi::SubscribePrivateTopic(DSTAR_TE_RESUME_TYPE nResumeType) {
	//
}

void ImpDSTARTradeApi::SubscribePublicTopic(DSTAR_TE_RESUME_TYPE nResumeType) {
	api_->SetSubscribeStartId(nResumeType);
}

int ImpDSTARTradeApi::ReqLastClientReqId() {
	return api_->ReqLastClientReqId();
}

int ImpDSTARTradeApi::ReqUserLogin(DstarApiReqLoginField *pReqUserLogin) {
	account_no_ = pReqUserLogin->AccountNo;
	password_ = pReqUserLogin->Password;
	app_id_ = pReqUserLogin->AppId;
	license_no_ = pReqUserLogin->LicenseNo;

	// real initialization in DSTAR API
	api_->RegisterFrontAddress(const_cast<char*>(ip_.c_str()), tcp_port_);
	char log_path[] = "./";
	api_->SetApiLogPath(log_path);
	api_->SetLoginInfo(pReqUserLogin);
	api_->SetCpuId(0, -1);
	int ret = SubmitSystemInfo();
	if (ret != 0) {
		return ret;
	}

	return api_->Init(DSTAR_API_INIT_QUERY);
}

int ImpDSTARTradeApi::ReqAuthenticate(DstarApiReqUdpAuthField *pUdpAuth) {
	printf("Req UDP Authenticate: account index:%d auth code:%d\n", pUdpAuth->AccountIndex, pUdpAuth->UdpAuthCode);
	char sendbuf[1024] = {0};
	DstarApiHead *head = (DstarApiHead *)sendbuf;
	FillHead(head, CMD_API_Req_UdpAuth, 1, sizeof(DstarApiReqUdpAuthField));
	memcpy(sendbuf + sizeof(DstarApiHead), pUdpAuth, sizeof(DstarApiReqUdpAuthField));

	return Send(sendbuf, sizeof(DstarApiHead) + head->DataLen);
}

int ImpDSTARTradeApi::ReqOrderInsert(DstarApiReqOrderInsertField *pOrderInsert) {
	char sendbuf[1024] = {0};
	DstarApiHead *head = (DstarApiHead *)sendbuf;
	FillHead(head, CMD_API_Req_OrderInsert, 1, sizeof(DstarApiReqOrderInsertField));
	memcpy(sendbuf + sizeof(DstarApiHead), pOrderInsert, sizeof(DstarApiReqOrderInsertField));
	
	return Send(sendbuf, sizeof(DstarApiHead) + head->DataLen);
}

int ImpDSTARTradeApi::ReqOrderAction(DstarApiReqOrderDeleteField *pOrderAction) {
	char sendbuf[1024] = {0};
	DstarApiHead *head = (DstarApiHead *)sendbuf;
	FillHead(head, CMD_API_Req_OrderDelete, 1, sizeof(DstarApiReqOrderDeleteField));
	memcpy(sendbuf + sizeof(DstarApiHead), pOrderAction, sizeof(DstarApiReqOrderDeleteField));
	
	return Send(sendbuf, sizeof(DstarApiHead) + head->DataLen);
}

void ImpDSTARTradeApi::FillHead(DstarApiHead *head, DstarApiProtocolCodeType protocol, int field_count, int field_size) {
	//head->FrameFlag = DSTAR_API_HEAD_FLAG;
	head->ProtocolCode = protocol;
	head->DataLen = field_size;
	//head->Version = DSTAR_API_PROTOCOL_VERSION;
	//head->FieldCount = field_count;
	//head->FieldSize = field_size;
}

int ImpDSTARTradeApi::Send(const char *buf, const int len) {
	int ret = ::sendto(socket_, buf, len, 0, (struct sockaddr *)&svraddr_, sizeof(svraddr_));
	if (len != ret)
		return 1;
	return 0;
}

int ImpDSTARTradeApi::SubmitSystemInfo() {
	char systeminfo[1024] = {0};
	int len = 1024;
	unsigned int version = 0;
	int ret = api_->GetSystemInfo(systeminfo, &len, &version);
	if (ret != 0) {
		printf("Failed to GetSystemInfo %d\n", ret);
		return ret;
	}

	DstarApiSubmitInfoField info;
	memset(&info, 0, sizeof(info));
	strncpy(info.AccountNo, account_no_.c_str(), sizeof(DstarApiAccountNoType) - 1);
	info.AuthType = DSTAR_API_AUTHTYPE_DIRECT;
	info.AuthKeyVersion = version;
	memcpy(info.SystemInfo, systeminfo, len);
	strncpy(info.LicenseNo, "esunny_epolestar", sizeof(DstarApiLicenseNoType) - 1);
	strncpy(info.ClientAppId, "esunny_epolestar_9.0", sizeof(DstarApiAppIdType) - 1);

	api_->SetSubmitInfo(&info);
	return ret;
}
