//
//  OKMarginAccountsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginAccountsRO.h"
#import "OKMarginAccountsPO.h"

@interface OKMarginAccountsAPI : NSObject

@property(nonatomic,strong) OKMarginAccountsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsPO *po, NSError *error))completionHandler;

@end