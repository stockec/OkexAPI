//
//  OKMarginOrders_pendingAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginOrders_pendingRO.h"
#import "OKMarginOrders_pendingPO.h"

@interface OKMarginOrders_pendingAPI : NSObject

@property(nonatomic,strong) OKMarginOrders_pendingRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginOrders_pendingPO *po, NSError *error))completionHandler;

@end