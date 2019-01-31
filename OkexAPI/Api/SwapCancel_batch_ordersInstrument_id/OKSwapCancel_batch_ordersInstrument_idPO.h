//
//  OKSwapCancel_batch_ordersInstrument_idPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapCancel_batch_ordersInstrument_idPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *ids; // ids    String    订单id列表
@property(nonatomic,strong) NSString *result; // result    String    调用接口返回结果

@end