//
//  OKSpotCancel_batch_ordersRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotCancel_batch_ordersRO : NSObject

@property(nonatomic,strong) NSString *order_ids; // order_ids    list<long>    是    订单编号，每次只能撤销同一币对下的最多4笔订单
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    是    币种

@end