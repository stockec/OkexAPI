//
//  OKSpotBatch_ordersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotBatch_ordersRO.h"
#import "OKSpotBatch_ordersPO.h"

@interface OKSpotBatch_ordersAPI : NSObject

@property(nonatomic,strong) OKSpotBatch_ordersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotBatch_ordersPO *po, NSError *error))completionHandler;

@end