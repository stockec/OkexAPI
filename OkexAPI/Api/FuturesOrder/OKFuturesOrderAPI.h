//
//  OKFuturesOrderAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesOrderRO.h"
#import "OKFuturesOrderPO.h"

@interface OKFuturesOrderAPI : NSObject

@property(nonatomic,strong) OKFuturesOrderRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesOrderPO *po, NSError *error))completionHandler;

@end