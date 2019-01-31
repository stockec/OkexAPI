//
//  OKSpotCancel_batch_ordersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotCancel_batch_ordersRO.h"
#import "OKSpotCancel_batch_ordersPO.h"

@interface OKSpotCancel_batch_ordersAPI : NSObject

@property(nonatomic,strong) OKSpotCancel_batch_ordersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotCancel_batch_ordersPO *po, NSError *error))completionHandler;

@end