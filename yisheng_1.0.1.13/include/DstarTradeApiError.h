///@system  Dstar V10
///@file    DstarTradeApiError.h
///@author  Hao Lin 2021-01-30


#ifndef DSTARTRADEAPIERROR_H
#define DSTARTRADEAPIERROR_H



// 错误码
typedef unsigned int        DstarApiErrorCodeType;
const DstarApiErrorCodeType DSTAR_API_ERR_SUCCESS           = 0;        // 正确
      
const DstarApiErrorCodeType DSTAR_API_ERR_NOCONNECTION      = 10001;    // 未连接
const DstarApiErrorCodeType DSTAR_API_ERR_NOTLOGIN          = 10002;    // 未登录
const DstarApiErrorCodeType DSTAR_API_ERR_NOTREADY          = 10003;    // API未就绪
const DstarApiErrorCodeType DSTAR_API_ERR_SUBSERIALID       = 10004;    // 订阅流号错误
      
const DstarApiErrorCodeType DSTAR_API_ERR_AUTHSTRING        = 20001;    // 认证串错误
const DstarApiErrorCodeType DSTAR_API_ERR_NOACCOUNTNO       = 20002;    // 不存在的账号
const DstarApiErrorCodeType DSTAR_API_ERR_PASSWORD          = 20003;    // 密码错误
const DstarApiErrorCodeType DSTAR_API_ERR_LOGINCOUNT        = 20004;    // 登录数超限
const DstarApiErrorCodeType DSTAR_API_ERR_GWNOTCONN         = 20005;    // 网关未连
const DstarApiErrorCodeType DSTAR_API_ERR_CONTRACTINDEX     = 20006;    // 非法索引值
const DstarApiErrorCodeType DSTAR_API_ERR_TCPLOGIN          = 20007;    // 未进行TCP认证
const DstarApiErrorCodeType DSTAR_API_ERR_ACCOUNTINDEX      = 20008;    // 客户索引值非法
const DstarApiErrorCodeType DSTAR_API_ERR_UDPAUTHCODE       = 20009;    // UDP认证码错误
const DstarApiErrorCodeType DSTAR_API_ERR_NOAUTH            = 20010;    // 未进行UDP认证
const DstarApiErrorCodeType DSTAR_API_ERR_ACCINDEX          = 20011;    // 非认证账号下单
const DstarApiErrorCodeType DSTAR_API_ERR_CONTRACTNO        = 20012;    // 合约索引和合约号不一致
const DstarApiErrorCodeType DSTAR_API_ERR_REQDATA           = 20013;    // 报单字段有误
const DstarApiErrorCodeType DSTAR_API_ERR_CLIENTREQID       = 20014;    // 客户请求号不合法
const DstarApiErrorCodeType DSTAR_API_ERR_ADDRESS           = 20015;    // 报撤单地址异常
const DstarApiErrorCodeType DSTAR_API_ERR_AUTHCODE          = 20016;    // 报撤单认证码异常
const DstarApiErrorCodeType DSTAR_API_ERR_TRADERIGHT        = 20017;    // 没有交易权限
const DstarApiErrorCodeType DSTAR_API_ERR_FUND              = 20018;    // 资金不足
const DstarApiErrorCodeType DSTAR_API_ERR_PARENTFUND        = 20019;    // 父账号资金不足
const DstarApiErrorCodeType DSTAR_API_ERR_ORDERFREQUENCY    = 20020;    // 客户下单频率超限
const DstarApiErrorCodeType DSTAR_API_ERR_AUTHVERSION       = 20021;    // 密钥版本错误
const DstarApiErrorCodeType DSTAR_API_ERR_SUBMITEMPTY       = 20022;    // 信息采集数据为空
const DstarApiErrorCodeType DSTAR_API_ERR_NOLICENSE         = 20023;    // 不存在的授权
const DstarApiErrorCodeType DSTAR_API_ERR_NOORDER           = 20024;    // 撤单未找到原始委托
const DstarApiErrorCodeType DSTAR_API_ERR_SEATINDEX         = 20025;    // 非法席位索引
const DstarApiErrorCodeType DSTAR_API_ERR_MAXCNT            = 20026;    // 批量数量超过单笔最大量
const DstarApiErrorCodeType DSTAR_API_ERR_LICENSENO         = 20027;    // 授权码异常
const DstarApiErrorCodeType DSTAR_API_ERR_VERSION           = 20028;    // 协议版本不一致
const DstarApiErrorCodeType DSTAR_API_ERR_STATE             = 20029;    // 指定委托状态无法撤单
const DstarApiErrorCodeType DSTAR_API_ERR_ENOUGH            = 20030;    // 委托容量不足
const DstarApiErrorCodeType DSTAR_API_ERR_POSITION          = 20031;    // 持仓不足平
const DstarApiErrorCodeType DSTAR_API_ERR_TRADENO           = 20032;    // 不存在交易编码
const DstarApiErrorCodeType DSTAR_API_ERR_SEAT              = 20033;    // 席位异常
const DstarApiErrorCodeType DSTAR_API_ERR_UNSUPPORTED       = 20034;    // 不支持的定单
const DstarApiErrorCodeType DSTAR_API_ERR_SYSTEMNO          = 20035;    // 系统号异常
const DstarApiErrorCodeType DSTAR_API_ERR_NOCOMMODITY       = 20036;    // 不存在的品种
const DstarApiErrorCodeType DSTAR_API_ERR_WHITELIST         = 20037;    // 不是白名单品种
const DstarApiErrorCodeType DSTAR_API_ERR_NOCONTRACT        = 20038;    // 不存在的合约
const DstarApiErrorCodeType DSTAR_API_ERR_PRICE             = 20039;    // 价格异常
const DstarApiErrorCodeType DSTAR_API_ERR_HWLOGIN           = 20040;    // 设置硬件登录信息异常

const DstarApiErrorCodeType DSTAR_API_ERR_SEATFREQUENCY     = 30001;    // 席位下单频率超限
const DstarApiErrorCodeType DSTAR_API_ERR_SENDFAILED        = 30002;    // 发送失败
const DstarApiErrorCodeType DSTAR_API_ERR_LOCAL_ENOUGH      = 30003;    // 本地号容量不足
const DstarApiErrorCodeType DSTAR_API_ERR_LOCALNO           = 30004;    // 本地号错误
const DstarApiErrorCodeType DSTAR_API_ERR_EXEC              = 30005;    // 不支持行权定单
const DstarApiErrorCodeType DSTAR_API_ERR_CANCEL_EXEC       = 30006;    // 不支持撤销行权定单
const DstarApiErrorCodeType DSTAR_API_ERR_ABANDON           = 30007;    // 不支持弃权定单
const DstarApiErrorCodeType DSTAR_API_ERR_CANCLE_ABANDON    = 30008;    // 不支持撤销弃权定单
const DstarApiErrorCodeType DSTAR_API_ERR_CMB               = 30009;    // 不支持组合定单
const DstarApiErrorCodeType DSTAR_API_ERR_INITING           = 30010;    // 系统正在初始化
const DstarApiErrorCodeType DSTAR_API_ERR_NOTHREAD          = 30011;    // 非当前线程数据

const DstarApiErrorCodeType DSTAR_API_ERR_SLG_ORDERUNUSUAL  = 60001;    // 策略单下单异常
const DstarApiErrorCodeType DSTAR_API_ERR_SLG_INVALIDSORDER = 60002;    // 无效策略单
const DstarApiErrorCodeType DSTAR_API_ERR_SLG_NOQUOTE       = 60003;    // 没有行情


//郑商所错误码
// 100:	指定商品状态已成功改变
// 101:	指定商品权限已成功改变
// 102:	指定会员公司状态已成功改变
// 103:	拖定客户状态已成功改变
// 104:	指定交易另状本已成功改变
// 105:	指定交易员已成功释放
// 106:	指定交易员权限已成功改变
// 107:	指定交易员口令已成功改变
// 108:	交易员网络地址已成功改变
// 109:	交易员已成功从交易系统中退出
// 110:	开盘时间已成功改变
// 111:	开市时间已成功改变
// 112:	闭市时间已成功改变
// 113:	结算价计算时间已成功改变
// 114:	交易中断结束时间已成功改变
// 115:	交易中断起始时间已成功改变
// 116:	交易已成功挂起
// 117:	交易已成功释放
// 118:	交易已成功关闭
// 119:	交易已成功开放
// 120:	OK copy interval quotations
// 121:	指定商品停板额已成功改变
// 122:	标题新闻已被成功接受
// 123:	图表查询已成功挂起
// 124:	图表查询已成功开放
// 125:	斩仓单在队列中等待
// 126:	交割申请已被接受
// 127:	Test System
// 129:	交易员口令已成功改变
// 130:	撒销所有委托单成功
// 131:	撒销指定委托单成功
// 132:	交割申请单撤消成功
// 133:	交割申请已成功匹配
// 134:	最大下单量已成功改变
// 135:	最好N个价位值已成功改变
// 136:	交易节已成功改变
// 137:	交易节已成功改变
// 138:	指定会员头寸已成功改变
// 139:	指定商品结算参数已经成功改变
// 140:	操作员指令已经接受
// 141:	最小下单量已经成功改变
// 142:	商品价格波动幅度已经成功改变
// 143:	商品交易节已经成功改变
// 144:	会员最大持仓头寸已经成功改变
// 145:	会员持仓放大因子已经成功改变
// 146:	收会员追加额外保证金成功
// 147:	会员存取结算准备金成功
// 148:	指定会员对该商品的交易权限已成功改变
// 149:	指定管理员命令已经成功撤销
// 150:	指定会员委托单撤销成功
// 151:	交易系统已成功进入协议平仓阶段
// 152:	交易系统已成功退出协议平仓阶段
// 153:	没有找到指定会员委托单
// 154:	内存结算已经成功执行完毕
// 155:	指定商品交割结算价已成功改变
// 156:	会员移仓已经成功执行
// 157:	两个买卖持仓单已经成功对冲完毕
// 158:	指定商品未成交委托单撒销成功
// 159:	商品保证金率已经成功改变
// 160:	指定会员对该商品的参数已成功改变
// 161:	会员减仓单成功	
// 204: 交易员权限不够
// 215:	不可以参与指定品种的交易
// 236:	贵公司持仓已经超过交易所规定最大持仓限制
// 237:	贵公司持仓已经超过交易所规定最大持仓限制
// 251:	现在是协议平仓时间,您的公司不在协议平仓之列
// 252: 目前没有可以响应的做市商
// 254:	没有查询到相应的记录
// 255:	套期保值额度不够
// 256: 目前不支持这样的组合确认方式
// 258:	期权放弃必须在期权最后交易日
// 259: 没有指定的报价请求
// 261:	没有该合约的做市商
// 263:	不是指定合约的做市商
// 264:	报价响应价格中买卖价格错误
// 265:	请求数量超过实际允许数量
// 266:	已经存在指定合约的市场报价（对报价请求）
// 301:	组合定单方式不正确
// 302:	组合定单限制方式不正确
// 303:	没有这样的组合方式
// 304:	SPD组合定单错误
// 305:	IPS组合定单错误
// 306:	BUL组合定单错误
// 307:	BER组合定单错误
// 308:	BLT组合定单错误
// 309:	BRT组合定单错误
// 310:	STD组合定单错误
// 311:	STG组合订单错误
// 312:	限价单价格不能为0或负数
// 313:	止损定单价格不能是可成交的价格
// 314:	市价单价格必须是0
// 315:	系统内存表已满
// 316:	该客户没有在你公司处登记
// 317:	该客户目前不可以进行交易
// 318:	指定的交易品种不进行开盘竞价
// 319:	委托定单限制域不正确
// 320:	定单类型不正确
// 321:	定单有效日期不正确
// 322:	套期保值标志不正确
// 323:	会员没有相应的买卖权限
// 324:	该客户没有相应的买卖权限
// 325:	FOK定单不能立即完全成交
// 326:	该委托单已经完全触发
// 327:	委托单修改定义错误
// 328:	组合定单价格错误
// 329:	委托定单价格超过停板
// 330:	报单请求数超过最大值
// 331:	没有查询到相应的记录
// 332:	止损价与保护价产生矛盾
// 340:	没有该合约的做市商
// 341:	集合竟价期间不允许组合定单
// 342:	不支持期货FOK定单
// 343:	集合意价期间不允许市价单
// 344:	集合竞价期间不允许期货止损单
// 345:	不支持有限制的期货止损单
// 346:	集合竞价期间不允许有限制期权定单
// 347:	集合竞价期间不允许期权市价单
// 348:	不支持期权止损单
// 349:	集合竞价期间不允许期货组合定单
// 350:	不支持期货FOK组合定单
// 351:	不支持期货组合市价单
// 352:	不支持期货组合止损单
// 353:	集合竞价期间不允许期权组合定单
// 354:	不支持无限制期权组合定单
// 355:	不支持期权组合市价单
// 356:	不支持期权组合止损单
// 360: 期权操作类型不正确
// 361:	目前暂不允许IOC定单
// 362:	目前暂不允许FOK市价定单
// 363:	目前暂不允许止损定单
// 364:	目前暂不允许长期有效定单
// 410:	单方无报价时不接受期货组合定单
// 601:	非法系统操作员
// 602:	不是交易时间
// 603:	非法操作员指令
// 604:	非法交易商品代码
// 605:	交易商品状态已处于被改变状态
// 606:	非法交易商品状态
// 607:	会员公司状态已处于被改变状态
// 608:	非法会员公司代码
// 609:	非法会员公司状态
// 610:	非法交易员代码
// 611:	交易员状态已处于被改变状态
// 612:	非法交易员状态
// 613:	非法网络地址
// 614:	交易员已经退出登录
// 615:	非法时间
// 616:	指定时间比开市时间晚
// 617:	指定时间比开市时间早
// 618:	指定时间比闭市时间晚
// 619:	非法中断开始时间
// 620:	结算价计算时间比开市时间早
// 621:	结算价计算时间比闭市时间晚
// 622:	非法中断结束时间
// 623:	中断结束时间必须在中断开始时间之后
// 624:	中断结束时间比开市时间早
// 625:	非法中断开始时间
// 626:	中断开始时间必须在中断结束时间之后
// 627:	中断开始时间比闭市时间晚
// 628:	交易系统已经被暂停
// 629:	交易系统未被暂停
// 630:	交易系统已经被关闭
// 631:	交易系统未被关闭
// 632:	行情表已满(内部错误)
// 633:	统计图表查询已经被暂停
// 634:	统计图表查询已经打开
// 635:	现在不能输入市价委托单
// 636:	委托单价格超过上停板额
// 637:	委托单价格低干下停板额
// 638:	委托单价格不是最小变动价位整数倍
// 639:	委托单表已满(内部错误)
// 640:	非法买卖标志
// 641:	指定商品现在不能进行交易
// 642:	买卖数量不能为零或负数
// 643:	非法开平仓标志
// 644:	请求数量不是整数倍
// 645:	请求合约不是期权
// 646:	平仓数量超过持仓量
// 647:	闭市期权申请只能在最后交易日
// 648:	没有指定查询范围，检查发送协议
// 649:	没有委托定单类型
// 650:	没有新成交单
// 651:	没有新持仓单
// 652:	没有持仓信息
// 653:	没有新行情
// 654:	没有商品行情信息
// 655:	没有新商品信息
// 656:	非法权限
// 657:	非法价格类型(A/B/C)
// 658:	非法日期类型(W/M)
// 659:	非法请求时间
// 660:	没有昨日行情信息
// 661:	没有套期保值额度
// 662:	申清交制品种还没有进入交割
// 663:	非法交割数量
// 665:	持仓表己满(内部错误)
// 666:	现在不是交易时间
// 667:	交易系统已被挂起
// 668:	交易系统协议类型不支持
// 669:	交易系统不能服务所发请求
// 670:	没有访问权限
// 671:	交易员已被挂起
// 672:	你所属会员公司已被挂起
// 673:	非法登录请求
// 674:	非法口令
// 675:	你不能从该工作站登录系统
// 676:	此交易员已经登录
// 677:	旧口令不对
// 678:	该委托单已经成交或已经撒销
// 679:	所撤委托单没有找到
// 680:	指定撤销类型不对
// 681:	非法客户代码
// 682:	所查询的单子没找到
// 683:	成交表已满(内部错误)
// 684:	交割申请表已满(内部错误)
// 685:	不是交割时间
// 687:	交割单没找到
// 688:	没有交割申请单
// 689:	交割单表已满
// 690:	该会员公司持仓超限
// 691:	该会员公司保证金不足
// 692:	该会员公司持仓超限且保证金不足
// 693:	该会员公司不能被斩仓
// 694:	没有图形信息
// 695:	未成交单太多，不能一次传完，请用详细查找范围
// 696:	你不是主所操作员，不能执行该操作
// 697:	该会员不属于你所在的分交易中心，不能执行该操作
// 698:	该交易员不属于你所在的分交易中心，不能执行该操作
// 699:	市价委托单价格错误
// 700:	委托单买卖数量不符合最小变动数量规定
// 701:	用户数量已经超过系统最大限制
// 702:	你不在指定分交易中心且不是主所操作员，不能执行该操作
// 703:	你已经在当前交易节
// 704:	指定交易节已经结束
// 705:	非法交易节号
// 706:	非法最好价位N值
// 707:	指定商品不在本交易节交易
// 708:	买卖数量超过交易所最大下单量限制
// 709:	没有持仓信息
// 710:	该委托单已经撒销
// 711:	该委托单已经成交
// 712:	该委托单为强行平仓单，不可撤销
// 713:	该委托单不是您所下的委托单，不可撒销
// 714:	该商品已转人交割，不能进行交易
// 715:	现在尚未开始交易，不能进行锁单对冲
// 716:	现在已经过了对冲时间，不能进行锁单对冲
// 750:	指定价格超过商品价幅波动上限
// 751:	指定价格超过商品价幅波动下限
// 752:	指定商品现在只可平仓，不可开仓
// 753:	指定商品买方现在只可平仓，不可开仓
// 754:	指定商品卖方现在只可平仓，不可开仓
// 755:	你对指定商品没有交易权限
// 756:	你对指定商品买方现在只可平仓，不可开仓
// 757:	你对指定商品卖方现在只可平仓，不可开仓
// 758:	Cannot Find Clearing Record
// 759:	贵公司缺乏足够资金
// 760:	非法登录版本
// 761:	命令执行时间非法
// 762:	指定管理员命令没找到
// 763:	非法客户代码
// 764:	客户状态已处于被改变状态
// 765:	非法客户状态
// 766:	贵公司持仓己经超过交易所规定最大持仑限制
// 767:	没有交割匹配单
// 768:	没有客户信息
// 769:	没有输人交割仓库
// 770:	非法交割仓库代码
// 771:	没有客户结算信息
// 772:	现在是协议平仓时间，您的公司不在协议平仓之列
// 773:	您在指定品种上买单不能开仓
// 774:	您在指定品种上买单不能平仓
// 775:	您在指定品种上卖单不能开仓
// 776:	您在指定品种上卖单不能平仓
// 777:	指定品种买单不能开仓
// 778:	指定品种买单不能平仓
// 779:	指定品种卖单不能开仓
// 780:	指定品种卖单不能平仓
// 781:	非法连接类型
// 782:	没有交割仓库信息
// 783:	非法交割品种信息
// 784:	现在是协议平仓时间，不能输入交割申请单
// 785:	还没有执行数据装入，不能执行内存结算
// 786:	内存结算已经执行，不能再次执行
// 787:	内存结算出错，查明原因后重新执行或采用数据库结算
// 788:	移仓会员没有足够的持仓量
// 789:	移仓价不在涨跌停板范围内
// 790:	没有相应的保值申请，不能输入保值单
// 791:	委托数量大于相应的保值申请数量
// 792:	非法交易所代码
// 793:	没有查询范围内的信息
// 794:	套期保值平仓数量超过相应持仓量
// 795:	持仓单大多，不能一次传完，请用详细查找范围
// 796:	需对冲的买仓单没有找到
// 797:	需对冲的卖仓单设有找到
// 798:	对冲数量不能为零或负数
// 799:	对冲数量不能大于买卖仓单的最小可平仓量
// 800:	指定两个持仓单不能进行对冲(不符合对冲规定)
// 801:	管理员命令协议错误
// 802:	您不能开仓
// 803:	没有相应的特仓单可供交割
// 804:	只有卖方才可以提交割申请
// 805:	交割数量超过持合单可交割量
// 806:	申请交割数量超过交易所规定最大交割量
// 807:	非法交割品种
// 808:	没有相应交割品种产期
// 809:	仓单中没有相应数量
// 810:	指针表已满(内部错误)
// 811:	所撤交割申请单没有找到
// 812:	您在指定品种上买单不能开仓或平仓
// 813:	您在指定品种上卖单不能开仓或平仓
// 814:	指定品种买单不能开仓或平仓
// 815:	指定品种卖单不能开仓或平仓
// 816:	重试登录次数过多，用户被挂起
// 817:	没有平仓成交单
// 818:	该品种现在还没有闭市，不能修改该参数
// 819:	非法交割品种等级
// 820:	非法交割品种产地
// 821:	没有仓单信息
// 822:	买实数量超过市价单最大下单量限制
// 823:	没有相应委托单
// 824:	该委托单不是您的委托单
// 825:	非法增减标志
// 826:	非法品种类别
// 827:	非法仓单数量
// 828:	该交割单已经撤销
// 829:	你没有相应品种交易权限
// 830:	该品种本月没有交割
// 831:	抵押数量超过空仓持有量
// 832:	今日定单大多，不能一次传完，请用详细查找范围
// 834:	期转现协议平仓合约号有错
// 835:	非法会员公司代码1
// 836:	非法会员公司代码2
// 837:	非法会员公司代码3
// 838:	非法会员公司代码4
// 839:	请检查会员持仓方向
// 840:	集合竞价期间不允许下市价单
// 841:	投资者持仓已经超过交易所规定最大持仓限制
// 900:	会员持仓超限
// 901:	客户持仓超限
// 990:	本功能暂不提供

//上期所/能源所错误码
// 1	会话不正确
// 2	合约找不到
// 3	会员找不到
// 4	客户找不到
// 6	报单字段错误
// 7	报价字段错误
// 8	报单操作字段错误
// 9	报价操作字段错误
// 12	重复的报单
// 13	重复的报价
// 15	客户没有在该会员开户
// 16	IOC需在连续交易阶段
// 17	GFA需在集合竞价阶段
// 18	市价单不能排队
// 19	数量约束应在IOC单上
// 20	GTD报单过期了
// 21	最小数量大于报单数量
// 22	交易所数据没有同步
// 23	结算组数据没有同步
// 24	报单找不到
// 25	报价找不到
// 26	当前状态禁止此项操作	
// 27	不合法的合约状态迁移
// 28	报单已经全部成交
// 29	报单已经撤销
// 31	平仓时客户持仓不足
// 32	超出客户限仓
// 34	超出会员限仓
// 35	找不到帐号
// 36	资金不足
// 37	不合法的数量
// 45	结算组初始化状态不对
// 48	价格非最小单位的倍数
// 49	价格超出涨停板
// 50	价格跌破跌停板
// 51	没有交易权限
// 52	只能平仓
// 53	没有此项交易角色
// 57	不能为其他会员操作
// 58	用户不匹配
// 59	用户重复登录
// 60	用户名或口令错误
// 62	用户不活跃
// 64	用户不属于此会员
// 65	错误的登录IP地址
// 67	并没有以此用户登录
// 66	用户尚未登录
// 68	并没有以此会员登录
// 70	报价已经被取消
// 72   不允许自然人开仓
// 76	报单已经被挂起
// 77	报单已经被激活
// 78	GTD报单没有设定日期
// 79	不被支持的报单类型
// 80	用户无此权限
// 83	止损单仅用于连续交易
// 84	止损单需是IOC或GFD
// 89	执行宣告字段错误
// 90	执行宣告操作字段错误
// 91	重复的执行宣告
// 92	执行宣告已经取消
// 93	执行宣告找不到
// 94	执行宣告只能用于期权
// 95	止损报单需说明止损价
// 96	保值额度不足
// 97	重复的操作
// 99	不能为其他用户操作
// 100	错误的用户类型
// 103	当日套保仓位不能平仓
// 104	不明管理指令
// 106	重复的会话
// 114	最优价单不能排队
// 121	放弃执行宣告字段错误
// 122	放弃执行宣告操作字段错误
// 123	重复的放弃执行宣告
// 124	放弃执行宣告已经取消
// 125	放弃执行宣告找不到
// 126	放弃执行宣告只能用于期权
// 127	不在宣告期内
// 128	只有持有多头仓位才能放弃行权
// 129	执行或放弃执行宣告不能为开仓
// 130	没有足够的持仓用于申请保留
// 131	超出客户合约当日开仓限额
// 132	超出客户产品每秒报单限额
// 133	超出客户产品每秒撤单限额
// 134	API校验未通过
// 135	用户认证失败
// 136	用户没有权限直连前置
// 137	期权自对冲字段错误
// 138	期权自对冲操作字段错误
// 139	重复的期权自对冲更新
// 140	期权自对冲更新已经撤销
// 141	期权自对冲更新只能用于期权
// 142	期权自对冲找不到
// 143	期权自对冲操作只能是删除
// 144	此客户SelfCloseFlag不能为保留期权仓位
// 145	此客户SelfCloseFlag不能为自对冲期权仓位
// 146	只有持有多头仓位才能行权
// 147	用户新密码不符合要求（长度不低于8位，必须包含数字、大写字母和小写字母）
// 148	当前市场价格在合理的价差范围内，不用询价。
// 149	放弃执行宣告申请只能在期权到期日提交
// 150	自营会员登陆前未认证或认证失败

// 中金所错误码
// 1 会话不正确 
// 2 合约找不到 
// 3 会员找不到 
// 4 客户找不到 
// 6 报单字段错误 
// 7 报价字段错误 
// 8 报单操作字段错误 
// 9 报价操作字段错误 
// 12 重复的报单 
// 13 重复的报价 
// 15 客户没有在该会员开户 
// 16 IOC需在连续交易阶段 
// 17 GFA需在集合竞价阶段 
// 18 市价单不能排队 
// 19 数量约束应在IOC单上 
// 20 GTD报单过期了 
// 21 最小数量大于报单数量 
// 22 交易所数据没有同步 
// 23 结算组数据没有同步 
// 24 报单找不到 
// 25 报价找不到 
// 26 当前状态禁止此项操作 
// 27 不合法的合约状态迁移 
// 28 报单已经全部成交 
// 29 报单已经撤销 
// 31 平仓时客户持仓不足 
// 32 超出客户限仓 
// 34 超出会员限仓 
// 35 找不到帐号 
// 36 资金不足 
// 37 不合法的数量 
// 45 结算组初始化状态不对 
// 48 价格非最小单位的倍数 
// 49 价格超出涨停板 
// 50 价格跌破跌停板 
// 51 没有交易权限 
// 52 只能平仓 
// 53 没有此项交易角色 
// 57 不能为其他会员操作 
// 58 用户不匹配 
// 59 用户重复登录 
// 60 用户名或口令错误 
// 62 用户不活跃 
// 64 用户不属于此会员 
// 65 错误的登录IP地址 
// 67 并没有以此用户登录 
// 66 用户尚未登录 
// 68 并没有以此会员登录 
// 70 报价已经被取消 
// 76 报单已经被挂起 
// 77 报单已经被激活 
// 78 GTD报单没有设定日期 
// 79 不被支持的报单类型 
// 80 用户无此权限 
// 83 止损单仅用于连续交易 
// 84 止损单需是IOC或GFD 
// 89 执行宣告字段错误 
// 90 执行宣告操作字段错误 
// 91 重复的执行宣告 
// 92 执行宣告已经取消 
// 93 执行宣告找不到 
// 94 执行宣告只能用于期权 
// 95 止损报单需说明止损价 
// 96 保值额度不足 
// 97 重复的操作 
// 99 不能为其他用户操作 
// 100 错误的用户类型 
// 101 结算会员不能做交易 
// 102 无法找到对应结算会员 
// 103 当日套保仓位不能平仓 
// 104 不明管理指令 
// 106 重复的会话 
// 107 无此功能的权限 
// 108 需结算会员做此操作 
// 109 结算交易会员不匹配 
// 110 管理指令字段错误 
// 111 信用限额不足 
// 113 信用限额尚未初始化过 
// 114 最优价单不能排队 
// 121 没有报价权限 
// 122 询价字段错误 
// 123 询价客户字段不能为空 
// 124 询价会员字段不能为空 
// 125 价格超出波动带 
// 126 价格跌破波动带 
// 127 市价单需在连续交易阶段 
// 128 任意价单有效期类型不正确 
// 129 最优价单有效期类型不正确 
// 130 五档价单有效期类型不正确 
// 131 组合持仓数量不足 
// 132 组合单腿持仓数量不足 
// 133 不支持的组合动作方向 
// 134 没有组合权限 
// 135 组合规则不存在 
// 136 组合单腿保证金收取方式不同 
// 137 组合合约保证金率找不到 
// 138 订单触发自成交 
// 139 超出开仓手数限制 
// 143 OTC对手方会员风控检查失败 
// 144 OTC对手方交易检查失败 
// 901 当前交易日...不可进行期转现申报 
// 902 申报时间不在规定范围内 
// 903 现货成交日期不同 
// 904 跨日期转现申报不能超过次日... 
// 905 合约... 不可进行期转现交易 
// 906 协商一致日期不能小于上一交易日 
// 907 协商一致日期不能大于当前交易日 
// 908 协商一致日期与现货成交日期不一致 
// 909 协商一致时间不能大于申报时间 
// 910 当前不可进行期转现申报 
// 911 现货交易成交编号..与当日期转现申报重复
// 912 现货交易成交编号...与上一日期转现申报重复 
// 913 交易双方客户号不能相同 
// 914 期转现多笔现货买卖方向不一致 
// 915 期转现申报中现货买卖方向有误 
// 916 期转现申报中期货买卖方向有误 
// 917 期转现申报中期现货买卖方向相同 
// 918 现货...不可参与期转现交易 
// 919 非法人投资者之间不能以期转现交易方式达成交易 
// 920 (交易所审核不通过的具体原因) 
// 951 会员不可参与期转现交易 
// 952 客户不可参与期转现交易 
// 954 客户...无交易权限 

// 广期所错误码
// 10000049 合约不是询价应价合约或没有做市商做市
// 10000050 不满足询价间隔
// 10000051 此RFQ 已处理过
// 10000052 场上有合理报价，不能询价
// 10000053 品种交易状态不对，不能交易
// 10000054 本合约做市商不能自询价
// 10000055 会员客户检查不通过
// 10000056 会员客户检查不通过
// 10010001 会员或交易员不符!
// 10010002 会员不符!
// 10010003 CA 认证尚未通过，拒绝发送交易!
// 10010004 登录尚未成功，拒绝发送交易!
// 10010005 操作员无权发送该交易!
// 10010006 发送交换机机失败!
// 10010007 用户不符!
// 10010008 密码修改失败!
// 10010009 Ca 认证请求包错误!
// 10010010 已经经过CA 认证!
// 10010011 没有经过CA 认证Session!
// 10010012 Session 认证请求包错误!
// 10010013 登录包错误!
// 10010014 已经登录!
// 10010015 交易员不能超级登录!
// 10010016 在执行委托时该代码代表的错误为"定单来源检查错误!" 在执行询价时该代码代表的错误为"RFQ 来源检查错误!"
// 10010017 登出!
// 10010018 此本地报单号对应的定单已报入!
// 10010019 席位不存在!
// 10010020 用户不存在!
// 10010021 客户检查错误!
// 10030001 市场状态不允许!
// 10030002 会员号不能为空!
// 10030003 合约不存在!
// 10030004 会员客户检查不通过!
// 10030005 数量不合理!
// 10030006 记录不存在!
// 10030007 记录已撤销!
// 10030008 对冲设置错误!
// 10030009 非到期日不能进行设置!
// 10030010 重复设置！
// 10030011 投保标志设置错误!
// 10030012 期权执行申请失败!
// 10030013 履约对冲设置失败!
// 10030014 履约对冲撤销失败!
// 10030015 期权对冲设置失败!
// 10030016 期权对冲撤销失败!
// 10030017 取消自动行权设置失败!
// 10030018 取消自动行权撤销失败!
// 10030019 合约类型不是期权!
// 10030020 品种交易状态不存在!
// 10030021 发送数据包失败!
// 10030022 品种交易状态不允许!
// 10040001 定单类别检查错误!
// 10040002 定单类型检查错误!
// 10040003 开平标志错误!
// 10040004 买卖标志检查错误!
// 10040005 投保标志检查错误!
// 10040006 定单属性检查错误!
// 10040007 此定单类别只能下一个定单!
// 10040008 批量订单只能有两个单子!
// 10040009 批量定单两腿定单类别不一致!
// 10040010 会员客户检查不通过!
// 10040011 已经销户!
// 10040012 席位不存在!
// 10040013 席位不属于会员!
// 10040014 合约交易权限检查，合约不可以交易!
// 10040015 合约交易权限检查，合约只可平仓!
// 10040016 客户交易权限检查，合约不可以交易!
// 10040017 客户交易权限检查，合约只可平仓!
// 10040018 席位交易权限检查，合约不可以交易!
// 10040019 席位交易权限检查，合约只可平仓!
// 10040020 套利合约不存在!
// 10040021 合约不存在!
// 10040022 批量单只可一个期权定单和一个期货定单!
// 10040023 合约未上市!
// 10040024 下单数量不在合理范围内!
// 10040025 价格最小变动单位不能为0,基础数据错!
// 10040026 价格最小变动单位不符合!
// 10040027 合约行情不存在!
// 10040028 价位不在涨跌幅度内!
// 10040029 止损价位不在涨跌幅度内!
// 10040030 买限价止损单-止损价应低于触发后限价!
// 10040031 卖限价止损单-止损价应高于触发后限价!
// 10040032 买限价止盈单-止盈价应低于触发后限价!
// 10040033 卖限价止盈单-止盈价应高于触发后限价!
// 10040034 套利合约行情不存在!
// 10040035 定单状态检查不合法!
// 10040039 已经撤单!
// 10040040 完全成交,不能撤单!
// 10040041 委托单不存在!
// 10040042 此会员无结算帐号!
// 10040043 套利策略规则表里不存在此记录!
// 10040044 取不到固定保证金!
// 10040045 市场状态!
// 10040046 结算账号禁止开仓!
// 10040047 客户不存在!
// 10040048 期权价格必须大于TICK!
// 10040049 期权止损价格必须大于TICK!
// 10040050 定单来源检查错误!
// 10040051 期权组合保证金比例表无对应的组合记录!
// 10040053 不能撤销手动或自动产生的强平单!
// 10040054 不能撤销他人的单子!
// 10040055 做市商标记错误!
// 10040056 双边报价指令要求两个单子!
// 10040057 双边报价指令必须为限价委托!
// 10040058 双边报价指令必须无定单属性委托!
// 10040059 双边报价指令两条腿必须都是做市商!
// 10040060 双边报价指令两腿委托数量相等!
// 10040061 双边报价指令两腿合约不相同!
// 10040062 双边报价指令两腿必须一买一卖!
// 10040063 合约已经停牌!
// 10040064 期权必须是投机!
// 10040065 只有做市商可以下双边报价指令!
// 10040066 双边报价指令两腿定单类别不一致!
// 10040067 只允许一个撤单域
// 10040072 双边报价指令两腿客户号不一致!
// 10040073 双边报价指令卖价必须大于买价!
// 10040074 品种交易权限不存在!
// 10040075 该品种不支持双边报价定单!
// 10040076 该品种只支持做市商下双边报价定单!
// 10040077 做市商在该品种无双边报价权限!
// 10040078 双边报价定单两腿定单类别不一致!
// 10040079 该品种不支持市价单!
// 10040080 双边定单两腿投保标志不一致!
// 10040083 实控组交易权限检查，合约不可以交易!
// 10040084 实控组交易权限检查，合约只可平仓!
// 10050001 结算帐号对应的交易资金不存在!
// 10050002 套利合约不存在!
// 10050003 套利策略规则表里不存在此记录!
// 10050004 委托表没有系统号对应的记录!
// 10050005 委托单不存在!
// 10050006 合约行情不存在!
// 10050007 成交批次号对应的持仓明细不存在!
// 10050008 席位不存在!
// 10050009 席位会员关系不正确!
// 10050010 席位密码不正确!
// 10050011 席位已经登录!
// 10050012 席位已经登出!
// 10050013 席位没有登录!
// 10050014 控制模式改变失败!
// 10050015 市场状态改变失败!
// 10050016 用户不存在!
// 10050017 用户密码不正确!
// 10050018 用户已经登录!
// 10050019 用户已经登出!
// 10050020 用户没有登录!
// 10050021 不允许从当前状态直接转变到目的状态!
// 10050022 非超级登录不能禁用CA!
// 10050023 新密码长度应该在8 到16 位!
// 10050024 密码修改的差异度不够!
// 10050025 票号对应的资金已经正常入库!
// 10050026 出金资金不够!
// 10050027 场上不允许出金!
// 10050028 发送数据包失败!
// 10050029 查无记录!
// 10050030 初次登录修改初始密码，否下次不能登录!
// 10050031 席位被冻结!
// 10050032 用户被冻结!
// 10050033 密码有效参数不存在!
// 10050034 登录失败有效参数不存在!
// 10050035 登录密码过期，联系系统管理员重置密码!
// 10050036 结算账户表中不存在对应的结算账户!
// 10050037 结算准备金最低余额表不存在相应的记录!
// 10050038 期权执行申请失败!
// 10050039 期权执行申请单不存在!
// 10050040 用户已经存在!
// 10050041 合约交易权限已经存在!
// 10050042 合约交易权限不存在!
// 10050043 席位交易权限已经存在!
// 10050044 席位交易权限不存在!
// 10050045 客户交易权限已经存在!
// 10050046 客户交易权限不存在!
// 10050047 交易权限不正确!
// 10050048 密码到期提示时间不存在!
// 10050050 操作类型错误!
// 10050051 交易所代码对应的交易所不存在!
// 10050052 没有客户持仓!
// 10050053 客户不存在!
// 10050054 不需要资金不够强平!
// 10050055 系统未处暂停状态，不能手工生成强平单!
// 10050056 本日已做过生成强平处理，是否再次生成!
// 10050057 本日还没强平!
// 10050058 同一个交易日不允许倒着时间切换状态!
// 10050060 会员客户检查不通过!
// 10050061 客户优惠组合持仓表无相应记录!
// 10050062 客户套利持仓表无相应记录!
// 10050063 组合优惠表不存在组合合约!
// 10050064 优惠组合比例表不存在组合合约!
// 10050065 行情席位不允许在交易后台修改密码!
// 10050066 当前是自动模式!
// 10050076 IP 地址不正确!
// 10050077 资金不够!
// 10050079 交易编码无交易保证金!
// 10050083 定单类别不是期权执行申请!
// 10050084 组合状态必须是组合或解锁!
// 10050085 优惠组合持仓量不足!
// 10050086 组合合约两腿所属品种的交易状态不一致!
// 10050087 单腿持仓不足!
// 10050088 只允许一个数据域!
// 10060001 发送数据包失败!
// 10060002 查无记录!
// 10060003 套利策略规则表里不存在此记录!
// 10060004 结算帐号对应的交易资金不存在!
// 10070001 会员是自营,客户不是自营
// 10070002 开仓超过会员自营限仓
// 10070003 会员是经纪,客户不是经纪
// 10070004 开仓超过会员代理限仓
// 10070005 开仓超过会员综合限仓
// 10070006 开仓数量超过客户限制
// 10070007 平仓数量超过可平数量
// 10070008 客户无持仓
// 10070009 客户剩余保值额度不足
// 10070010 客户没有保值额度
// 10070021 会员超仓，不可开仓
// 10070022 个人客户不能在处于交割月的合约上开仓
// 10070022 个人客户不能在交割月的合约上开投机仓
// 10070023 开仓数量超过实控组投机限制
// 10070024 开仓数量超过实控组套保限制
// 10070025 开仓数量超过实控组综合限制
// 10070026 无此实控关系账户
// 10070027 开仓超过当日客户在合约/系列上开仓限额
// 10070028 开仓超过当日客户在品种上开仓限额
// 10070029 开仓超过当日实控组在合约/系列上开仓限额
// 10070030 开仓超过当日实控组在品种上开仓限额
// 10070031 开仓数量超过境外客户组综合限制
// 10070032 无此境外客户组账户
// 10071001 本撮合主机不支持该合约
// 10071002 基本定单不允许多个定单
// 10071003 无此会员
// 10071004 无此客户
// 10071005 本交易状态不接受该类定单
// 10071007 交易状态错误，暂停服务
// 10071008 本地报单号重复
// 10071009 套利定单非法
// 10071010 强平单数量非法
// 10071011 非法报文
// 10071012 本撮合组本交易状态下，不允许撤销定单
// 10071013 本撮合组该交易编码不是做市商
// 10071014 批量撤单请求，没有需要撤的定单
// 10071015 本撮合组批量撤单结束
// 10072002 定单被系统撤销
// 10072003 无此撤销定单
// 10072004 修改定单无效
// 10072005 修改定单数量非法
// 10080020 行情席位会员关系不正确!
// 10080021 行情席位没有登录!
// 10080022 行情席位密码不正确!
// 10080023 行情席位新密码长度应该在8 到16 位!
// 10080024 行情席位密码修改的差异度不够!
// 10080025 行情席位不存在!
// 10080063 席位密码已过期，请联系管理员重置密码!
// 10090000 无应答
// 10090004 转发失败
// 10090006 应答数据错误
// 10090009 FTCP 域错误

// 大商所错误码
// 10010001   会员或交易员不符
// 10010002   会员不符
// 10010003   CA认证尚未通过，拒绝发送交易
// 10010004   登录尚未成功，拒绝发送交易
// 10010005   操作员无权发送该交易
// 10010006   发送交换机机失败
// 10010007   用户不符
// 10010008   密码修改失败
// 10010009   Ca认证请求包错误
// 10010010   已经经过CA 认证
// 10010011   没有经过CA 认证 Session
// 10010012   Session 认证请求包错误
// 10010013   登录包错误
// 10010014   已经登录
// 10010015   交易员不能超级登录
// 10010016   定单来源检查错误
// 10010017   登出
// 10010018   此本地报单号对应的定单已报入
// 10010019   席位不存在
// 10010020   用户不存在
// 10010021   登录与认证时的席位号不一致
// 10010022 	登录与认证时的用户号不一致 
// 10010023 	登录类型错误 
// 10010024 	会员不存在 
// 10010025 	客户不存在 
// 10010026 	合约不存在 
// 10010027 	套利合约不存在 
// 10010028 	组合合约不存在 
// 10010029 	结算账号不存在 
// 10010030 	流控上限值修改失败 
// 10010031 	该报文在流控范围内 
// 10010032 	网关还没有准备好 
// 10010033 	席位和网关的行情等级不匹配 
// 10010034 	API版本号错误 
// 10010035 	ip或端口号错误 
// 10010036 	APP信息未填写 
// 10030001 	市场状态不允许 
// 10030002 	会员号不能为空 
// 10030003 	合约不存在 
// 10030004 	会员客户检查不通过 
// 10030005 	申请数量不合理 
// 10030006 	履约对冲申请记录不存在 
// 10030007 	期权执行申请记录已撤销 
// 10030008 	对冲标志设置错误 
// 10030009 	非到期日不能进行设置 
// 10030010 	重复设置 
// 10030011 	投保标志设置错误 
// 10030012 	期权执行申请失败 
// 10030013 	履约对冲设置失败 
// 10030014 	履约对冲撤销失败 
// 10030015 	期权对冲设置失败 
// 10030016 	期权对冲撤销失败 
// 10030017 	取消自动行权设置失败 
// 10030018 	取消自动行权撤销失败 
// 10030019 	合约类型不是期权 
// 10030020 	品种交易状态不存在 
// 10030021 	发送数据包失败 
// 10030022 	品种交易状态不允许 
// 10030023 	品种延时闭市时间上场失败 
// 10030024 	品种延时闭市控制表插入失败 
// 10030025 	合约交易状态不存在 
// 10030026 	合约交易状态不允许 
// 10030027 	品种延时闭市时间记录不存在 
// 10030028 	取消自动行权申请记录不存在 
// 10030029 	期权对冲申请记录不存在 
// 10030030 	期权行权申请记录不存在 
// 10030031 	延时闭市状态控制表为空 
// 10040001 	定单类别检查错误 
// 10040002 	定单类型检查错误 
// 10040003 	开平标志错误 
// 10040004 	买卖标志检查错误 
// 10040005 	投保标志检查错误 
// 10040006 	定单属性检查错误 
// 10040007 	此定单类别只能下一个定单 
// 10040008 	批量定单只能有两个单子 
// 10040009 	批量定单两腿定单类别不一致 
// 10040010 	会员客户检查不通过 
// 10040011 	已经销户 
// 10040012 	席位不存在 
// 10040013 	席位不属于会员 
// 10040014 	合约交易权限检查，合约不可以交易 
// 10040015 	合约交易权限检查，合约只可平仓 
// 10040016 	该客户该合约不可交易 
// 10040017 	该客户该合约只可平仓 
// 10040018 	该席位该合约不可交易 
// 10040019 	该席位该合约只可平仓 
// 10040020 	套利合约不存在 
// 10040021 	合约不存在 
// 10040022 	批量单只可一个期权定单和一个期货定单 
// 10040023 	合约未上市 
// 10040024 	下单数量不在合理范围内 
// 10040025 	价格最小变动单位不能为0 
// 10040026 	价格最小变动单位不符合 
// 10040027 	合约行情不存在 
// 10040028 	价位不在涨跌幅度内 
// 10040029 	止损价位不在涨跌幅度内 
// 10040030 	买限价止损单-止损价应低于触发后限价 
// 10040031 	卖限价止损单-止损价应高于触发后限价 
// 10040032 	买限价止盈单-止盈价应低于触发后限价 
// 10040033 	卖限价止盈单-止盈价应高于触发后限价 
// 10040034 	套利合约行情不存在 
// 10040035 	定单状态检查不合法 
// 10040036 	定单修改只能修改限价单 
// 10040037 	该品种当前是初始化后 
// 10040037 	该品种当前是集合竞价申报 
// 10040037 	该品种当前是集合竞价申报1阶段 
// 10040037 	该品种当前是集合竞价申报2阶段 
// 10040037 	该品种当前是集合竞价暂停 
// 10040037 	该品种当前是集合竞价撮合 
// 10040037 	该品种当前是连续交易暂停 
// 10040037 	该品种当前是收市 
// 10040038 	交易员不能撤强平单 
// 10040039 	已经撤单 
// 10040040 	完全成交 
// 10040041 	委托单不存在 
// 10040042 	此会员无结算帐号 
// 10040043 	套利策略规则表里不存在此记录 
// 10040044 	取不到固定保证金 
// 10040045 	该市场状态当前是初始化后 
// 10040045 	该市场状态已关闭 
// 10040045 	该市场状态当前是暂停 
// 10040046 	结算账号禁止开仓 
// 10040047 	客户不存在 
// 10040048 	期权价格必须大于等于TICK 
// 10040049 	期权止损价格必须大于等于TICK 
// 10040050 	定单来源检查错误 
// 10040051 	期权组合保证金比例表无对应的组合记录 
// 10040052 	该合约当前是集合竞价申报 
// 10040052 	该合约当前是集合竞价申报1阶段 
// 10040052 	该合约当前是集合竞价申报2阶段 
// 10040052 	该合约当前是集合竞价暂停 
// 10040052 	该合约当前是连续交易暂停 
// 10040052 	该合约当前是初始化后 
// 10040052 	该合约当前是集合竞价撮合 
// 10040052 	该合约当前是收市 
// 10040053 	不能撤销手动或自动产生的强平单 
// 10040055 	做市商标记错误 
// 10040056 	双边报价指令要求两个单子 
// 10040057 	双边报价指令必须为限价委托 
// 10040058 	双边报价指令定单属性必须同时为无或GIS 
// 10040059 	双边报价指令两条腿必须都是做市商 
// 10040060 	双边报价指令两腿委托数量相等 
// 10040061 	双边报价指令两腿合约不相同 
// 10040062 	双边报价指令两腿必须一买一卖 
// 10040063 	合约已经停牌 
// 10040064 	期权必须是投机 
// 10040065 	只有做市商可以下双边报价指令 
// 10040066 	双边报价指令两腿定单类别必须为双边定单 
// 10040067 	只允许一个撤单域 
// 10040068 	批量定单两腿客户号不一致 
// 10040069 	此套利合约不支持互换定单 
// 10040070 	品种交易状态不存在 
// 10040071 	套利各腿合约交易状态不一致 
// 10040072 	双边报价指令两腿客户号不一致 
// 10040073 	双边报价指令卖价必须大于买价 
// 10040074 	无品种指令权限 
// 10040075 	该品种不支持双边报价定单 
// 10040076 	该品种只支持做市商下双边报价定单 
// 10040077 	做市商在该品种无双边报价权限 
// 10040078 	双边报价定单两腿定单类别不一致 
// 10040079 	该品种不支持市价单 
// 10040080 	双边定单两腿投保标志不一致 
// 10040081 	该客户在该品种交易类型上没有套保资格 
// 10040082 	该客户在该品种交易类型上不能投机开仓 
// 10040083 	该实控组该合约不可交易 
// 10040084 	该实控组该合约只可平仓 
// 10040085 	本地报单号重复 
// 10040086 	做市商保护期间不允许报单 
// 10040087 	批量指令使用频率限制期间不允许报单 
// 10040088 	做市商取消冻结失败，当前为非冻结状态 
// 10040089 	重复触发批量双边报价使用频率限制 
// 10040090 	做市商频率限制状态错误 
// 10040091 	做市商保护冻结失败，重复触发冻结 
// 10040092 	当前交易状态不允许触发做市商保护冻结 
// 10040094 	批量双边单必须对同一品种或交易类型操作 
// 10040095 	批量双边报价动作指令错误 
// 10040096 	批量双边报价不支持单边报入 
// 10040097 	会员风控账户号不存在 
// 10040098 	可用额度不正确 
// 10040099 	该风控账户该合约不可交易 
// 10040100 	该风控账户该合约只可平仓 
// 10040101 	批量双边定单合约号重复 
// 10040102 	批量双边报价两腿操作不能都是无 
// 10040103 	该品种不存在 
// 10040104 	无品种GIS权限 
// 10040105 	做市商在该品种无批量双边报价权限 
// 10040106 	无一键撤单权限 
// 10040107 	系统未设置带保护市价单参数 
// 10040108 	价格保护范围不在合理限制内 
// 10040109 	批量双边报价域的对数不在合理范围 
// 10040110 	批量双边报价域最大个数不存在 
// 10040111 	UDS合约不存在 
// 10040112 	UDS合约行情不存在 
// 10040113 	定单类别与合约不符 
// 10040119 	此类定单不允许修改 
// 10040120 	已超过最大修改次数 
// 10040124 	该品种不支持批量双边报价定单 
// 10040125 	批量双边指令卖价必须大于买价 
// 10040126 	该品种只支持做市商下批量双边报价定单 
// 10040127 	UDS各腿合约交易状态不一致 
// 10040128 	交易编码检查不通过 
// 10040129 	下单数量超过交易指令的最大最小手数 
// 10040130 	本地报单号超过最大值 
// 10040131 	期权套保业务未开启 
// 10040132 	客户检查错误 
// 10050001 	结算帐号对应的交易资金不存在 
// 10050002 	套利合约不存在 
// 10050003 	套利策略规则表里不存在此记录 
// 10050004 	委托表没有系统号对应的记录 
// 10050005 	委托单不存在 
// 10050006 	合约行情不存在 
// 10050007 	成交批次号对应的持仓明细不存在 
// 10050008 	席位不存在 
// 10050009 	席位会员关系不正确 
// 10050010 	席位密码不正确 
// 10050011 	席位已经登录 
// 10050012 	席位已经登出 
// 10050013 	席位没有登录 
// 10050014 	控制模式改变失败 
// 10050015 	市场状态改变失败 
// 10050016 	用户不存在 
// 10050017 	用户密码不正确 
// 10050018 	用户已经登录 
// 10050019 	用户已经登出 
// 10050020 	用户没有登录 
// 10050021 	不允许从当前状态直接转变到目的状态 
// 10050022 	非超级登录不能禁用CA 
// 10050023 	新密码长度不满足要求 
// 10050024 	密码修改的差异度不够 
// 10050025 	票号对应的资金已经正常入库 
// 10050026 	出金资金不够 
// 10050027 	场上不允许出金 
// 10050028 	发送数据包失败 
// 10050029 	查无记录 
// 10050030 	初次登录修改初始密码，否下次不能登录 
// 10050031 	初次登录没有修改初始密码，席位被冻结 
// 10050032 	席位被冻结 
// 10050033 	密码有效参数不存在 
// 10050034 	登录失败有效参数不存在 
// 10050035 	登录密码过期，联系系统管理员重置密码 
// 10050036 	结算账户表中不存在对应的结算账户 
// 10050037 	结算准备金最低余额表不存在相应的记录 
// 10050038 	期权执行申请失败 
// 10050039 	期权执行申请单不存在 
// 10050040 	用户已经存在 
// 10050041 	合约交易权限已经存在 
// 10050042 	合约交易权限不存在 
// 10050043 	席位交易权限已经存在 
// 10050044 	席位交易权限不存在 
// 10050045 	客户交易权限已经存在 
// 10050046 	客户交易权限不存在 
// 10050047 	交易权限不正确 
// 10050048 	密码到期提示时间不存在 
// 10050050 	操作类型错误 
// 10050051 	交易所代码对应的交易所不存在 
// 10050052 	没有客户持仓 
// 10050053 	客户不存在 
// 10050054 	不需要资金不够强平 
// 10050055 	系统未处暂停状态，不能手动生成强平单 
// 10050056 	本日已做过生成强平处理，是否再次生成 
// 10050057 	本日还没强平 
// 10050058 	同一个交易日不允许倒着时间切换状态 
// 10050060 	会员客户检查不通过 
// 10050061 	客户优惠组合持仓表无相应记录 
// 10050062 	客户套利持仓表无相应记录 
// 10050063 	组合优惠表不存在组合合约 
// 10050064 	优惠组合比例表不存在组合合约 
// 10050065 	行情席位不允许在交易后台修改密码 
// 10050066 	当前是自动模式 
// 10050067 	没有境外客户组限仓 
// 10050068 	交易席位不允许在行情服务修改密码 
// 10050072 	初次登录没有修改初始密码，席位被冻结 
// 10050073 	用户被冻结 
// 10050076 	IP地址不正确 
// 10050077 	资金不够 
// 10050078 	席位信用额度不够 
// 10050079 	交易编码无交易保证金 
// 10050080 	数量不合理 
// 10050081 	系统处于夜盘暂停，不能手动生成强平单 
// 10050082 	踢除所有席位失败 
// 10050083 	定单类别不是期权执行申请 
// 10050084 	组合状态必须是组合或解锁 
// 10050085 	优惠组合持仓量不足 
// 10050086 	组合合约两腿所属品种的交易状态不一致 
// 10050087 	单腿持仓不足 
// 10050088 	只允许一个数据域 
// 10050089 	超出预留范围 
// 10050090 	实控组权限已经存在 
// 10050091 	实控组权限不存在 
// 10050092 	会员持仓不存在 
// 10050093 	单腿持仓记录不存在 
// 10050094 	批次号记录不存在 
// 10050095 	可用风控账户组额度不足 
// 10050096 	分会员检查不通过 
// 10050097 	撮合返回成交号顺序有错误 
// 10050098 	会员对应的风控账户额度不存在 
// 10050099 	改单价格或数量均未发生变化 
// 10050100 	修改数量小于等于已成交数量 
// 10050101 	不能修改强平单 
// 10050104 	风控账户组权限已经存在 
// 10050105 	风控账户组权限不存在 
// 10050106 	批量双边报价所有子域全部错误 
// 10050107 	风控账户组额度不存在 
// 10050108 	不能修改强平修改的委托 
// 10050070 	品种控制模式改变失败 
// 10050071 	品种控制模式错误 
// 10051001 	合约状态不存在 
// 10051002 	市场状态不存在 
// 10051003 	熔断合约状态不存在 
// 10051004 	品种状态改变失败 
// 10051005 	合约状态改变失败 
// 10051006 	风控账户额度修改值无效 
// 10051007 	品种状态查询失败 
// 10051008 	品种状态不存在 
// 10051010 	品种不支持开放式集合竞价 
// 10051011 	当前标的期货状态为暂停不允许此操作 
// 10051012 	新密码不存在数字 
// 10051013 	新密码不存在英文字符 
// 10051014 	新密码不存在大写字母 
// 10051015 	新密码不存在特殊字符 
// 10051016 	品种控制模式查询失败 
// 10051017 	网关类型不正确 
// 10051018 	正在进行强平处理 
// 10051019 	不能修改强平单顺序 
// 10051020 	正在生成强平单 
// 10051021 	非交易日品种 
// 10051025 	席位登录超出频率限制 
// 10051026 	当前标的期货状态为初始化后不允许此操作 
// 10051028 	规则生成强平单已经报入，不允许再次强平 
// 10051029 	申请已经存在，不允许再次申请 
// 10051030 	申请不存在，不允许复核 
// 10051031 	复核已经存在，不允许再次复核 
// 10051032 	复核请求参数不正确 
// 10051033 	不允许使用相同用户进行复核 
// 10051034 	当前交易日已强平过，无法再次自动强平 
// 10051035 	未满足所有合约处于交易暂停条件 
// 10051036 	其他原因 
// 10051037 	正在生成强平单，不允许再次强平 
// 10060001 	发送数据包失败 
// 10060002 	查无记录 
// 10060003 	套利策略规则表里不存在此记录 
// 10060004 	结算帐号对应的交易资金不存在 
// 10060006 	查询开始序列号应小于结束序列号 
// 10060007 	查询序列号超过限制范围 
// 10060008 	查询次数过多 
// 10060009 	没有做市商保护资格 
// 10060010 	该品种全市场做市商保护服务未开启 
// 10060011 	合约行情不存在 
// 10060012 	此会员无结算帐号 
// 10060013 	合约状态不存在 
// 10060014 	UDS合约交易申请报入量超过上限 
// 10060015 	当前市场状态未开启 
// 10060016 	会员客户检查不通过 
// 10060017 	套利策略不存在 
// 10060018 	UDS策略内各腿合约号不可为空 
// 10060019 	UDS策略不允许为期货套利策略 
// 10060020 	合约不存在 
// 10060021 	UDS申请的腿数超过策略支持的腿数 
// 10060022 	重复的UDS合约交易申请 
// 10070001 	会员是自营 
// 10070002 	开仓超过会员自营限仓 
// 10070003 	会员是经纪 
// 10070004 	开仓超过会员代理限仓 
// 10070005 	开仓超过会员综合限仓 
// 10070006 	开仓数量超过客户限制 
// 10070007 	平仓数量超过可平数量 
// 10070008 	客户无持仓 
// 10070009 	客户剩余保值额度不足 
// 10070010 	客户没有保值额度 
// 10070011 	保值额度不能为负数 
// 10070012 	流水号重复，本次修改操作已执行 
// 10070013 	无此客户保值额度信息，操作失败 
// 10070014 	客户有未成交套保委托，套保额度不能删除 
// 10070015 	无此操作类型 
// 10070016 	该客户有剩余额度，套保额度不能审批 
// 10070017 	客户有未成交套保委托，套保额度不能审批 
// 10070018 	剩余保值额度为0，不能删除 
// 10070021 	会员超仓，不可开仓 
// 10070022 	个人客户不能在交割月的合约上开投机仓 
// 10070023 	开仓数量超过实控组投机限制 
// 10070024 	开仓数量超过实控组套保限制 
// 10070025 	开仓数量超过实控组综合限制 
// 10070026 	无此实控关系账户 
// 10070027 	开仓超过当日客户在合约/系列上开仓限额 
// 10070028 	开仓超过当日客户在品种上开仓限额 
// 10070029 	开仓超过当日实控组在合约/系列上开仓限额 
// 10070030 	开仓超过当日实控组在品种上开仓限额 
// 10070031 	开仓数量超过境外客户组综合限制 
// 10070032 	无此境外客户组 
// 10070033 	开仓数量超过客户合并限仓 
// 10070034 	开仓数量超过实控组合并限仓投机限制 
// 10070035 	开仓数量超过实控组合并限仓套保限制 
// 10070036 	开仓数量超过实控组合并限仓综合限制 
// 10070037 	合约不存在 
// 10070038 	合约对应交割月错误 
// 10070039 	品种限仓模式错误 
// 10071001 	本撮合主机不支持该合约 
// 10071002 	基本定单不允许多个定单 
// 10071003 	无此会员 
// 10071004 	无此客户 
// 10071005 	本交易状态不接受该类定单 
// 10071006 	本交易状态不允许撤销定单 
// 10071007 	交易状态错误，暂停服务 
// 10071008 	本地报单号重复 
// 10071009 	套利定单非法 
// 10071010 	强平单数量非法 
// 10071011 	非法报文 
// 10071012 	本撮合组本交易状态下，不允许撤销定单 
// 10071013 	该交易编码不是做市商 
// 10071014 	批量撤单请求，没有需要撤的定单 
// 10071015 	本撮合组批量撤单结束 
// 10071016 	合约当前无最优价 
// 10072001 	定单状态已为撤销 
// 10072002 	定单被系统撤销 
// 10072003 	无此撤销定单 
// 10072004 	修改定单无效 
// 10072005 	修改定单数量非法 
// 10072006 	修改定单价格失败，卖价需大于买价 
// 10079990 	初始化数据错误 
// 10079996 	内存数据库剩余空间不足 
// 10079997 	系统运行超出设计范围 
// 10079998 	业务数据出错 
// 10079999 	内存数据库出错 
// 10080000 	行情订阅请求席位不存在 
// 10080001 	行情订阅请求参数不正确 
// 10080002 	席位没有行情订阅权限 
// 10080067 	此席位类型不是Level2行情席位 
// 10090000 	无应答 
// 10090001 	请求数据错误 
// 10090002 	没有定义的功能 
// 10090003 	无后续结果 
// 10090004 	转发失败 
// 10090005 	接收失败 
// 10090006 	应答数据错误 
// 10090008 	回应失败 
// 10090009 	FTCP域丢失 
// 10090010 	系统级错误 
// 10090011 	CA认证错误 
// 10090020 	90000-90020系统错误占用 
// 10110000 	做市商保护资格检查不通过 
// 10110001 	参数设置未变化 
// 10110002 	做市商取消冻结失败，当前为非冻结状态 
// 10110003 	做市商操作指令不存在 
// 10110004 	启用成交/delta量保护必须填写是/否 
// 10110005 	该品种保护服务未开启 
// 10110006 	交易所成交量保护服务未开启 
// 10110007 	交易所delta量保护服务未开启 
// 10110008 	成交量保护阈值下限检查不通过 
// 10110009 	delta量保护阈值下限检查不通过 
// 10110010 	冻结时间片范围检查不通过 
// 10110011 	全市场未开启，不允许报入指令 
// 10101001 	合约不是询价应价合约 
// 10101002 	不满足询价间隔 
// 10101003 	此RFQ已处理过 
// 10101004 	场上有合理报价，不能询价 
// 10101005 	合约交易状态不对，不可询价 
// 10101006 	本合约做市商不能自询价 
// 10101007 	交易系统当前不允许询价 
// 10101009 	期权或标的期货合约达到停板价格不允许询价 
// 10101010 	该时间段不允许询价 
// 10101011 	合约交易权限检查，合约不可询价 
// 10101012 	当前询价次数检查不通过 
// 10130010 	写入流水文件失败 
// 10130011 	读取流水文件失败 
// 10140000 	请求的网关类型不存在 
// 10140001 	非管理API无法发出管理请求 
// 10140002 	处理查询网关请求时未找到IP 
// 10140003 	查询请求中IP不合法 
// 10150000 	输入数据范围不合法 

	 
#endif // DSTARTRADEAPIERROR_H
