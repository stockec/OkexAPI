//
//  OKSwapOrdersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapOrdersRO.h"
#import "OKSwapOrdersPO.h"

@interface OKSwapOrdersAPI : NSObject

@property(nonatomic,strong) OKSwapOrdersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapOrdersPO *po, NSError *error))completionHandler;

@end