//
//  OKSwapFillsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapFillsRO.h"
#import "OKSwapFillsPO.h"

@interface OKSwapFillsAPI : NSObject

@property(nonatomic,strong) OKSwapFillsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapFillsPO *po, NSError *error))completionHandler;

@end