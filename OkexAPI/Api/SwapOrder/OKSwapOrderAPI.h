//
//  OKSwapOrderAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapOrderRO.h"
#import "OKSwapOrderPO.h"

@interface OKSwapOrderAPI : NSObject

@property(nonatomic,strong) OKSwapOrderRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapOrderPO *po, NSError *error))completionHandler;

@end