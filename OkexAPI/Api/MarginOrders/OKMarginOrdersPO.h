//
//  OKMarginOrdersPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKMarginOrdersPO : NSObject

@property(nonatomic,strong) NSString *order_id; // order_id    string    订单ID
@property(nonatomic,strong) NSString *price; // price    string    价格
@property(nonatomic,strong) NSString *size; // size    string    交易货币数量
@property(nonatomic,strong) NSString *notional; // notional    string    买入金额，市价买入时返回
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    币对名称
@property(nonatomic,strong) NSString *side; // side    string    buy or sell
@property(nonatomic,strong) NSString *type; // type    string    limit,market(默认是limit)
@property(nonatomic,strong) NSString *timestamp; // timestamp    string    订单创建时间
@property(nonatomic,strong) NSString *filled_size; // filled_size    string    已成交数量
@property(nonatomic,strong) NSString *filled_notional; // filled_notional    string    已成交金额
@property(nonatomic,strong) NSString *status; // status    string    订单状态

@end