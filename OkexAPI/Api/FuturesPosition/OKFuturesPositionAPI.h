//
//  OKFuturesPositionAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesPositionRO.h"
#import "OKFuturesPositionPO.h"

@interface OKFuturesPositionAPI : NSObject

@property(nonatomic,strong) OKFuturesPositionRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesPositionPO *po, NSError *error))completionHandler;

@end