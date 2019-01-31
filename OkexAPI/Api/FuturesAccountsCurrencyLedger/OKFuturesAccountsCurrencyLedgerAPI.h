//
//  OKFuturesAccountsCurrencyLedgerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesAccountsCurrencyLedgerRO.h"
#import "OKFuturesAccountsCurrencyLedgerPO.h"

@interface OKFuturesAccountsCurrencyLedgerAPI : NSObject

@property(nonatomic,strong) OKFuturesAccountsCurrencyLedgerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesAccountsCurrencyLedgerPO *po, NSError *error))completionHandler;

@end