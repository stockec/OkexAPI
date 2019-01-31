//
//  OKSwapAccountsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapAccountsRO.h"
#import "OKSwapAccountsPO.h"

@interface OKSwapAccountsAPI : NSObject

@property(nonatomic,strong) OKSwapAccountsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapAccountsPO *po, NSError *error))completionHandler;

@end