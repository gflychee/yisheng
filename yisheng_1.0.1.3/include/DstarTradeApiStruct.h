///@system  Dstar V10
///@file    DstarTradeApiStruct.h
///@author  Hao Lin 2020-08-20

#ifndef DSTARTRADEAPISTRUCT_H
#define DSTARTRADEAPISTRUCT_H

#include "DstarTradeApiDataType.h"


#pragma pack(push, 1)

// 登录请求
typedef struct DstarApiReqLoginField
{
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiPasswdType                     Password;                    // 密码
    DstarApiAppIdType                      AppId;                       // app id(中继模式填中继app id)
    DstarApiLicenseNoType                  LicenseNo;                   // 软件授权号
}DstarApiReqLoginField;

// 登录应答
typedef struct DstarApiRspLoginField
{
    DstarApiAccountIndexType               AccountIndex;                // 账号索引
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiDateType                       TradeDate;                   // 当前交易日
    DstarApiAuthCodeType                   UdpAuthCode;                 // UDP认证码
    DstarApiErrorCodeType                  ErrorCode;                   // 错误码
}DstarApiRspLoginField;


// 上报信息
typedef struct DstarApiSubmitInfoField
{
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiAuthTypeType                   AuthType;                    // 授权类型
    DstarApiAuthKeyVersion                 AuthKeyVersion;              // 密钥版本号
    DstarApiSystemInfoType                 SystemInfo;                  // 系统采集信息
    DstarApiIpType                         ClientLoginIp;               // 客户登录ip,直连模式不需要填写,中继模式需要填写
    DstarApiPortType                       ClientLoginPort;             // 客户登录port,直连模式不需要填写,中继模式需要填写
    DstarApiDateTimeType                   ClientLoginDateTime;         // 登录时间,直连模式不需要填写,中继模式需要填写
    DstarApiAppIdType                      ClientAppId;                 // app id
    DstarApiLicenseNoType                  LicenseNo;                   // 软件授权号
}DstarApiSubmitInfoField;

// 上报信息应答
typedef struct DstarApiRspSubmitInfoField
{
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiErrorCodeType                  ErrorCode;                   // 错误码
}DstarApiRspSubmitInfoField;


// UDP认证应答
typedef struct DstarApiRspUdpAuthField
{
    DstarApiAccountIndexType               AccountIndex;                // 账号索引
    DstarApiAuthCodeType                   UdpAuthCode;                 // udp认证码
    DstarApiReqIdModeType                  ReqIdMode;                   // 请求号模式,不强制模式:请求号不强制连续但要求增大;强制模式:请求号必须连续自增
    DstarApiErrorCodeType                  ErrorCode;                   // 错误码
}DstarApiRspUdpAuthField;


// 席位
typedef struct DstarApiSeatField
{
    DstarApiSeatIndexType                  SeatIndex;                   // 席位索引
    DstarApiSeatNoType                     SeatNo;                      // 席位号
    DstarApiExchangeType                   Exchange;                    // 交易所编号
}DstarApiSeatField;


// 合约数据
typedef struct DstarApiContractField
{
    DstarApiExchangeType                   ExchangeId;                  // 交易所
    DstarApiCommodityType                  CommodityType;               // 品种类型
    DstarApiContractIndexType              ContractIndex;               // 合约索引
    DstarApiContractSizeType               ContractSize;                // 每手乘数
    DstarApiContractNoType                 ContractNo;                  // 合约编号
    DstarApiContractTickSizeType           ContractTickSize;            // 最小变动价位
    DstarApiPriceType                      PreSettlePrice;              // 昨结算
    DstarApiDateType                       ExpDate;                     // 合约到期日
}DstarApiContractField;


// 委托数据
typedef struct DstarApiOrderField
{
    DstarApiDirectType                     Direct;                      // 买卖方向
    DstarApiOffsetType                     Offset;                      // 开平标志
    DstarApiHedgeType                      Hedge;                       // 投机套保
    DstarApiValidTypeType                  ValidType;                   // 有效类型
    DstarApiPriceType                      OrderPrice;                  // 委托价格
    DstarApiQuantityType                   OrderQty;                    // 委托数量
    DstarApiQuantityType                   MinQty;                      // 最小成交量
    DstarApiQuantityType                   MatchQty;                    // 成交量
    DstarApiErrorCodeType                  ErrCode;                     // 错误编号
    DstarApiSerialIdType                   SerialId;                    // 流号
    DstarApiOrderIdType                    OrderId;                     // 委托号
    DstarApiFundType                       FrozenMargin;                // 冻结保证金
    DstarApiFundType                       Margin;                      // 保证金
    DstarApiFundType                       Fee;                         // 手续费
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiOrderLocalNoType               OrderLocalNo;                // 本地号
    DstarApiSystemNoType                   SystemNo;                    // 系统号
    DstarApiDateTimeType                   UpdateTime;                  // 更新时间
    DstarApiDateTimeType                   ExchInsertTime;              // 交易所下单时间
    DstarApiReferenceType                  Reference;                   // 报单引用(无报单引用时返回-1)
    DstarApiContractNoType                 ContractNo;                  // 合约编号
    DstarApiOrderTypeType                  OrderType;                   // 委托类型
    DstarApiOrderStateType                 OrderState;                  // 委托状态
    DstarApiSeatIndexType                  SeatIndex;                   // 接收席位索引
    DstarApiSeatNoType                     UpSeatNo;                    // 报单席位号             
}DstarApiOrderField;


// 报单应答
typedef struct DstarApiRspOrderInsertField
{
    DstarApiSeatIndexType                  SeatIndex;                   // 席位索引
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiClientReqId                    ClientReqId;                 // 客户请求号
    DstarApiReferenceType                  Reference;                   // 报单引用(无报单引用时返回-1)
    DstarApiClientReqId                    MaxClientReqId;              // 最大请求号
    DstarApiOrderIdType                    OrderId;                     // 委托号
    DstarApiDateTimeType                   InsertTime;                  // 下单时间
    DstarApiErrorCodeType                  ErrCode;                     // 错误编号
}DstarApiRspOrderInsertField;


// 撤单应答
typedef DstarApiRspOrderInsertField        DstarApiRspOrderDeleteField;


// 报价应答
typedef DstarApiRspOrderInsertField        DstarApiRspOfferInsertField;


// 报价通知
typedef struct DstarApiOfferField
{
    DstarApiOffsetType                     BuyOffset;                   // 买开平标志
    DstarApiOffsetType                     SellOffset;                  // 卖开平标志
    DstarApiQuantityType                   OrderQty;                    // 报价数量
    DstarApiPriceType                      BuyPrice;                    // 买价
    DstarApiPriceType                      SellPrice;                   // 卖价
    DstarApiQuantityType                   BuyMatchQty;                 // 买成交量
    DstarApiQuantityType                   SellMatchQty;                // 卖成交量
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiOrderLocalNoType               OrderLocalNo;                // 本地号
    DstarApiSystemNoType                   SystemNo;                    // 系统号
    DstarApiSystemNoType                   EnquiryNo;                   // 询价号
    DstarApiDateTimeType                   UpdateTime;                  // 更新时间
    DstarApiDateTimeType                   ExchInsertTime;              // 交易所下单时间
    DstarApiFundType                       FrozenMargin;                // 冻结保证金
    DstarApiFundType                       Margin;                      // 保证金
    DstarApiSerialIdType                   SerialId;                    // 流号
    DstarApiOrderIdType                    OrderId;                     // 委托号
    DstarApiErrorCodeType                  ErrCode;                     // 错误编号
    DstarApiOrderStateType                 OrderState;                  // 报价状态
    DstarApiReferenceType                  Reference;                   // 报单引用(无报单引用时返回-1)
    DstarApiContractNoType                 ContractNo;                  // 合约编号
    DstarApiSeatIndexType                  SeatIndex;                   // 接收席位索引
    DstarApiSeatNoType                     UpSeatNo;                    // 报价席位号
}DstarApiOfferField;


// 询价通知
typedef struct DstarApiEnquiryField
{
    DstarApiContractNoType                 ContractNo;                  // 合约编号
    DstarApiDirectType                     Direct;                      // 买卖方向
    DstarApiSystemNoType                   EnquiryNo;                   // 询价号
}DstarApiEnquiryField;


// 成交数据
typedef struct DstarApiMatchField
{
    DstarApiContractNoType                 ContractNo;                  // 合约编号
    DstarApiQuantityType                   MatchQty;                    // 成交数量
    DstarApiPriceType                      MatchPrice;                  // 成交价格
    DstarApiOffsetType                     Offset;                      // 开平标志
    DstarApiDirectType                     Direct;                      // 买卖方向
    DstarApiHedgeType                      Hedge;                       // 投机套保
    DstarApiOrderTypeType                  OrderType;                   // 委托类型
    DstarApiReferenceType                  Reference;                   // 报单引用(无报单引用时返回-1)
    DstarApiSerialIdType                   SerialId;                    // 流号
    DstarApiOrderIdType                    OrderId;                     // 委托号
    DstarApiMatchIdType                    MatchId;                     // 成交号
    DstarApiMatchTimeType                  MatchTime;                   // 成交时间
    DstarApiExchMatchNo                    ExchMatchNo;                 // 交易所成交号
    DstarApiSystemNoType                   SystemNo;                    // 系统号
    DstarApiFundType                       Fee;                         // 手续费
    DstarApiFundType                       Margin;                      // 保证金
    DstarApiFundType                       FrozenMargin;                // 冻结保证金
    union
    {
        DstarApiFundType                   Premium;                     // 权利金
        DstarApiFundType                   CloseProfit;                 // 平仓盈亏
    };
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiDateTimeType                   UpdateTime;                  // 更新时间
}DstarApiMatchField;

// 昨持仓数据
typedef struct DstarApiPrePositionField
{
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiContractNoType                 ContractNo;                  // 合约编号
    DstarApiQuantityType                   PreBuyQty;                   // 昨买持仓量
    DstarApiPriceType                      PreBuyAvgPrice;              // 昨买持仓均价
    DstarApiQuantityType                   PreSellQty;                  // 昨卖持仓量
    DstarApiPriceType                      PreSellAvgPrice;             // 昨卖持仓均价

}DstarApiPrePositionField;

// 实时持仓
typedef struct DstarApiPositionField
{
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiContractNoType                 ContractNo;                  // 合约编号
    DstarApiQuantityType                   PreBuyQty;                   // 昨买持仓量
    DstarApiQuantityType                   TodayBuyQty;                 // 今买持仓量 (总买持仓量=昨买持仓量+今买持仓量)
    DstarApiPriceType                      BuyAvgPrice;                 // 买持仓均价
    DstarApiQuantityType                   PreSellQty;                  // 昨卖持仓量
    DstarApiQuantityType                   TodaySellQty;                // 今卖持仓量 (总卖持仓量=昨卖持仓量+今卖持仓量)
    DstarApiPriceType                      SellAvgPrice;                // 卖持仓均价
    DstarApiSerialIdType                   SerialId;                    // 持仓数据对应流号
}DstarApiPositionField;


// 资金数据
typedef struct DstarApiFundField
{
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiFundType                       PreEquity;                   // 昨权益
    DstarApiFundType                       Equity;                      // 权益
    DstarApiFundType                       Avail;                       // 可用
    DstarApiFundType                       Fee;                         // 手续费
    DstarApiFundType                       Margin;                      // 保证金
    DstarApiFundType                       FrozenMargin;                // 冻结保证金
    DstarApiFundType                       Premium;                     // 权利金
    DstarApiFundType                       CloseProfit;                 // 平仓盈亏
    DstarApiFundType                       PositionProfit;              // 持仓盈亏
    DstarApiFundType                       CashIn;                      // 入金
    DstarApiFundType                       CashOut;                     // 出金
}DstarApiFundField;


// 出入金通知
typedef struct DstarApiCashInOutField
{
    DstarApiSerialIdType                   SerialId;                    // 流号
    DstarApiCashInOutType                  CashInOutType;               // 出入金类型
    DstarApiCashInOutModeType              CashInOutMode;               // 出入金方式
    DstarApiFundType                       CashInOutValue;              // 出入金金额
    DstarApiAccountNoType                  AccountNo;                   // 账号
    DstarApiDateTimeType                   OperateTime;                 // 操作时间
}DstarApiCashInOutField;

// 最新请求号应答
typedef struct DstaApiRspLastReqIdField
{
    DstarApiClientReqId                    LastClientReqId;             // 最新请求号
}DstaApiRspLastReqIdField;


// 市场状态
typedef struct DstarApiTrdExchangeStateField
{
    DstarApiExchangeType                   ExchangeId;                     // 交易所
    DstarApiCommodityType                  CommodityType;                  // 品种类型
    DstarApiCommodityNoType                CommodityNo;                    // 品种号
    DstarApiTradingStateType               TradingState;                   // 交易状态
    DstarApiDateTimeType                   ExchangeTime;                   // 交易所时间
}DstarApiTrdExchangeStateField;

// 手续费参数
typedef struct DstarApiTrdFeeParamField
{
    DstarApiAccountNoType                  AccountNo;                      // 账号
    DstarApiContractNoType                 ContractNo;                     // 合约编号
    DstarApiParamType                      OpenRatio;                      // 开仓按比例
    DstarApiParamType                      OpenVolume;                     // 开仓按手数
    DstarApiParamType                      CloseRatio;                     // 平仓按比例
    DstarApiParamType                      CloseVolume;                    // 平仓按手数
    DstarApiParamType                      CloseTRatio;                    // 平今按比例
    DstarApiParamType                      CloseTVolume;                   // 平今按手数
}DstarApiTrdFeeParamField;

// 保证金参数
typedef struct DstarApiTrdMarParamField
{
    DstarApiAccountNoType                  AccountNo;                      // 账号
    DstarApiContractNoType                 ContractNo;                     // 合约编号
    DstarApiParamType                      BuySpeculateParam;              // 买投机参数
    DstarApiParamType                      BuyHedgeParam;                  // 买套保参数
    DstarApiParamType                      SellSpeculateParam;             // 卖投机参数
    DstarApiParamType                      SellHedgeParam;                 // 买套保参数
}DstarApiTrdMarParamField;

// 浮盈通知
typedef struct DstarApiPosiProfitField
{
    DstarApiAccountNoType                  AccountNo;                      // 账号
    DstarApiFundType                       PosiProfit;                     // 持仓盈亏
    DstarApiSerialIdType                   SerialId;                       // 流号
}DstarApiPosiProfitField;


// UDP协议头
typedef struct DstarApiHead
{
    DstarApiProtocolCodeType               ProtocolCode;                // 协议号
    DstarApiDataLen                        DataLen;                     // 数据长度(不包含协议头)
}DstarApiHead;


// Udp认证请求
static const DstarApiProtocolCodeType      CMD_API_Req_UdpAuth      = 0xEC00;

// UDP认证请求
typedef struct DstarApiReqUdpAuthField
{
    DstarApiAccountIndexType               AccountIndex;                // 账号索引
    DstarApiAuthCodeType                   UdpAuthCode;                 // udp认证码
    DstarApiReqIdModeType                  ReqIdMode;                   // 请求号模式,不检查:不检查报单请求号;不强制模式:请求号不强制连续但要求增大;强制模式:请求号必须连续自增
}DstarApiReqUdpAuthField;


// 批量报撤单, UDP单包报文最大长度为1024个字节

// 报单请求
static const DstarApiProtocolCodeType      CMD_API_Req_OrderInsert  = 0xEC01;
// 报价请求
static const DstarApiProtocolCodeType      CMD_API_Req_OfferInsert  = 0xEC02;
// 撤单请求
static const DstarApiProtocolCodeType      CMD_API_Req_OrderDelete  = 0xEC03;

// 报单请求
typedef struct DstarApiReqOrderInsertField
{
    DstarApiDirectType                     Direct;                      // 买卖方向
    DstarApiOffsetType                     Offset;                      // 开平标志
    DstarApiHedgeType                      Hedge;                       // 投机套保
    DstarApiOrderTypeType                  OrderType;                   // 委托类型
    DstarApiValidTypeType                  ValidType;                   // 有效类型
    DstarApiSeatIndexType                  SeatIndex;                   // 席位索引,0轮询席位,非0指定席位
    DstarApiAccountIndexType               AccountIndex;                // 客户索引
    DstarApiContractIndexType              ContractIndex;               // 合约索引
    DstarApiContractNoType                 ContractNo;                  // 合约编号
    DstarApiQuantityType                   OrderQty;                    // 委托数量
    DstarApiQuantityType                   MinQty;                      // 最小成交量
    DstarApiPriceType                      OrderPrice;                  // 委托价格
    DstarApiClientReqId                    ClientReqId;                 // 客户请求号
    DstarApiReferenceType                  Reference;                   // 报单引用(>=0,负数无效)
    DstarApiAuthCodeType                   UdpAuthCode;                 // udp认证码
}DstarApiReqOrderInsertField;

// 报价请求
typedef struct DstarApiReqOfferInsertField
{
    DstarApiOffsetType                     BuyOffset;                   // 买开平标志
    DstarApiOffsetType                     SellOffset;                  // 卖开平标志
    DstarApiAccountIndexType               AccountIndex;                // 客户索引
    DstarApiClientReqId                    ClientReqId;                 // 客户请求号
    DstarApiContractIndexType              ContractIndex;               // 合约索引
    DstarApiContractNoType                 ContractNo;                  // 合约编号
    DstarApiQuantityType                   OrderQty;                    // 报价数量
    DstarApiPriceType                      BuyPrice;                    // 买价
    DstarApiPriceType                      SellPrice;                   // 卖价
    DstarApiSeatIndexType                  SeatIndex;                   // 席位索引
    DstarApiSystemNoType                   EnquiryNo;                   // 询价号
    DstarApiReferenceType                  Reference;                   // 报单引用
    DstarApiAuthCodeType                   UdpAuthCode;                 // udp认证码
    
}DstarApiReqOfferInsertField;

// 撤单请求 (撤单失败时返回委托通知或报价通知,订单状态不变,包含撤单失败的错误码)
typedef struct DstarApiReqOrderDeleteField
{
    DstarApiAccountIndexType               AccountIndex;                // 客户索引
    DstarApiClientReqId                    ClientReqId;                 // 客户请求号
    DstarApiAuthCodeType                   UdpAuthCode;                 // udp认证码
    DstarApiReferenceType                  Reference;                   // 报单引用(>=0,负数无效)
    DstarApiSeatIndexType                  SeatIndex;                   // 席位索引,0从报单席位撤单,非0从指定席位撤单
    DstarApiOrderIdType                    OrderId;                     // 委托号
    DstarApiSystemNoType                   SystemNo;                    // 系统号
}DstarApiReqOrderDeleteField;


#pragma pack(pop)


#endif // DSTARTRADEAPISTRUCT_H
