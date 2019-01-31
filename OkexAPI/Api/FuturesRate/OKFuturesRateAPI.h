//
//  OKFuturesRateAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesRateRO.h"
#import "OKFuturesRatePO.h"

@interface OKFuturesRateAPI : NSObject

@property(nonatomic,strong) OKFuturesRateRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesRatePO *po, NSError *error))completionHandler;

@end