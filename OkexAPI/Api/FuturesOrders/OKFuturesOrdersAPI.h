//
//  OKFuturesOrdersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesOrdersRO.h"
#import "OKFuturesOrdersPO.h"

@interface OKFuturesOrdersAPI : NSObject

@property(nonatomic,strong) OKFuturesOrdersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesOrdersPO *po, NSError *error))completionHandler;

@end