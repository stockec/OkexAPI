//
//  OKFuturesCancel_batch_ordersInstrument_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesCancel_batch_ordersInstrument_idRO.h"
#import "OKFuturesCancel_batch_ordersInstrument_idPO.h"

@interface OKFuturesCancel_batch_ordersInstrument_idAPI : NSObject

@property(nonatomic,strong) OKFuturesCancel_batch_ordersInstrument_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesCancel_batch_ordersInstrument_idPO *po, NSError *error))completionHandler;

@end