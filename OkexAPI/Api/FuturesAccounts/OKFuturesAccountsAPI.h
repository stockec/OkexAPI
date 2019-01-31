//
//  OKFuturesAccountsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesAccountsRO.h"
#import "OKFuturesAccountsPO.h"

@interface OKFuturesAccountsAPI : NSObject

@property(nonatomic,strong) OKFuturesAccountsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesAccountsPO *po, NSError *error))completionHandler;

@end