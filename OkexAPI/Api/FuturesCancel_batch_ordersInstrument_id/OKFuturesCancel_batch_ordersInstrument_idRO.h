//
//  OKFuturesCancel_batch_ordersInstrument_idRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesCancel_batch_ordersInstrument_idRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    撤销指定合约品种的订单
@property(nonatomic,strong) NSString *order_ids; // order_ids    String    是    撤销指定的订单ID

@end