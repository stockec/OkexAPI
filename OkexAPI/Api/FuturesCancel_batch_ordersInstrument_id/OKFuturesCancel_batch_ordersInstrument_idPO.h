//
//  OKFuturesCancel_batch_ordersInstrument_idPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesCancel_batch_ordersInstrument_idPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    撤销指定合约品种的订单
@property(nonatomic,strong) NSString *order_ids; // order_ids    String    撤销指定的订单ID
@property(nonatomic,strong) NSString *result; // result    String    调用接口返回结果

@end