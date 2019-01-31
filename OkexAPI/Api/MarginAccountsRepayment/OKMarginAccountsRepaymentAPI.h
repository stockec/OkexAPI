//
//  OKMarginAccountsRepaymentAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginAccountsRepaymentRO.h"
#import "OKMarginAccountsRepaymentPO.h"

@interface OKMarginAccountsRepaymentAPI : NSObject

@property(nonatomic,strong) OKMarginAccountsRepaymentRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsRepaymentPO *po, NSError *error))completionHandler;

@end