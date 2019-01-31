//
//  OKMarginCancel_batch_ordersRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKMarginCancel_batch_ordersRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    是    提供此参数则撤销指定一个或多个币对的订单，如果不提供此参数则返回错误码，此字段支持传多个值。此参数为[''btc-usdt'',''ltc-eth''],推荐使用中横线连接币种，下划线连接的方式也同时兼容
@property(nonatomic,strong) NSString *order_id; // order_id    list <long>    是    订单ID

@end