//
//  OKSpotOrders_pendingAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotOrders_pendingRO.h"
#import "OKSpotOrders_pendingPO.h"

@interface OKSpotOrders_pendingAPI : NSObject

@property(nonatomic,strong) OKSpotOrders_pendingRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(NSArray<OKSpotOrders_pendingPO*> *pos, NSError *error))completionHandler;

@end
