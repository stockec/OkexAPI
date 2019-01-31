//
//  OKSwapRateAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapRateRO.h"
#import "OKSwapRatePO.h"

@interface OKSwapRateAPI : NSObject

@property(nonatomic,strong) OKSwapRateRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapRatePO *po, NSError *error))completionHandler;

@end