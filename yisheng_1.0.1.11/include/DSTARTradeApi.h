#ifndef DSTAR_TRADE_API
#define DSTAR_TRADE_API

#include "DstarTradeApi.h"

#include "stdio.h"
#include "string.h"

typedef int DSTAR_TE_RESUME_TYPE;
#define DSTAR_TERT_QUICK -1
#define DSTAR_TERT_RESTART 0


class DSTARTradeApi
{
public:
	static DSTARTradeApi *CreateDSTARTradeApi();

	virtual void Release() = 0;

	virtual int Init() = 0;

	virtual int Join() = 0;

	virtual void RegisterFront(const char *FrontAddress) = 0;

	virtual void RegisterSpi(IDstarTradeSpi *spi) = 0;

	virtual void SubscribePrivateTopic(DSTAR_TE_RESUME_TYPE nResumeType) = 0;

	virtual void SubscribePublicTopic(DSTAR_TE_RESUME_TYPE nResumeType) = 0;

	virtual int ReqLastClientReqId() = 0;

	virtual int ReqUserLogin(DstarApiReqLoginField *pReqUserLogin) = 0;

	virtual int ReqAuthenticate(DstarApiReqUdpAuthField *pUdpAuth) = 0;

	virtual int ReqOrderInsert(DstarApiReqOrderInsertField *pOrderInsert) = 0;

	virtual int ReqOrderAction(DstarApiReqOrderDeleteField *pOrderAction) = 0;

protected:
	virtual ~DSTARTradeApi() {}
};


#endif
