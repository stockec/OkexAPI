//
//  OKFuturesFillsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesFillsRO.h"
#import "OKFuturesFillsPO.h"

@interface OKFuturesFillsAPI : NSObject

@property(nonatomic,strong) OKFuturesFillsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesFillsPO *po, NSError *error))completionHandler;

@end