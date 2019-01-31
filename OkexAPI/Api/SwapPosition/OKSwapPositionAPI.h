//
//  OKSwapPositionAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapPositionRO.h"
#import "OKSwapPositionPO.h"

@interface OKSwapPositionAPI : NSObject

@property(nonatomic,strong) OKSwapPositionRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapPositionPO *po, NSError *error))completionHandler;

@end