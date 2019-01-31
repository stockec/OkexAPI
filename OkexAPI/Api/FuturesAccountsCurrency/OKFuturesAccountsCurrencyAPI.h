//
//  OKFuturesAccountsCurrencyAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesAccountsCurrencyRO.h"
#import "OKFuturesAccountsCurrencyPO.h"

@interface OKFuturesAccountsCurrencyAPI : NSObject

@property(nonatomic,strong) OKFuturesAccountsCurrencyRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesAccountsCurrencyPO *po, NSError *error))completionHandler;

@end