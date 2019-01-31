//
//  OKFuturesAccountsCurrencyLeverageAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesAccountsCurrencyLeverageRO.h"
#import "OKFuturesAccountsCurrencyLeveragePO.h"

@interface OKFuturesAccountsCurrencyLeverageAPI : NSObject

@property(nonatomic,strong) OKFuturesAccountsCurrencyLeverageRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesAccountsCurrencyLeveragePO *po, NSError *error))completionHandler;

@end