//
//  OKPostSpotOrdersRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKPostSpotOrdersRO : NSObject

@property(nonatomic,strong) NSString *client_oid;//    String    否    由您设置的订单ID来识别您的订单,类型为字母（大小写）+数字或者纯字母（大小写） ，1-32位字符
@property(nonatomic,strong) NSString *type;//    String    否    limit，market(默认是limit)
@property(nonatomic,strong) NSString *side;//    String    是    buy or sell
@property(nonatomic,strong) NSString *instrument_id;//    String    是    币对名称
@property(nonatomic,strong) NSString *order_type;//    String    否    参数填数字，0：普通委托（order type不填或填0都是普通委托） 1：只做Maker（Post only） 2：全部成交或立即取消（FOK） 3：立即成交并取消剩余（IOC）
@property(nonatomic,strong) NSString *margin_trading;//    byte    否    下单类型(当前为币币交易，请求值为1)
@property(nonatomic,strong) NSString *price;//    String    是    价格
@property(nonatomic,strong) NSString *size;//    String    是    买入或卖出的数量
// 市价单特殊参数
// 参数名    类型    是否必填    描述
@property(nonatomic,strong) NSString *notional;//    String    是    买入金额，市价买入是必填notional

@end
