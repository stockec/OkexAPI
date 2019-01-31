//
//  OKFuturesOrdersRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesOrdersRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *orders_data; // orders_data    List    是    JSON类型的字符串 例：[{price:5,amount:2,type:1,match_price:1},{price:2,amount:3,type:1,match_price:1}] 最大下单量为5，price,amount,type,match_price参数参考future_trade接口中的说明
@property(nonatomic) NSInteger leverage; // leverage    Number    是    要设定的杠杆倍数，10或20
@property(nonatomic,strong) NSString *client_oid; // client_oid    String    否    由您设置的订单ID来识别您的订单

@end