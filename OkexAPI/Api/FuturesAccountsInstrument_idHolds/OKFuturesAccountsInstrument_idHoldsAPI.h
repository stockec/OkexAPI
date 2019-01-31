//
//  OKFuturesAccountsInstrument_idHoldsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesAccountsInstrument_idHoldsRO.h"
#import "OKFuturesAccountsInstrument_idHoldsPO.h"

@interface OKFuturesAccountsInstrument_idHoldsAPI : NSObject

@property(nonatomic,strong) OKFuturesAccountsInstrument_idHoldsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesAccountsInstrument_idHoldsPO *po, NSError *error))completionHandler;

@end