//
//  OKMarginAccountsAvailabilityAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginAccountsAvailabilityRO.h"
#import "OKMarginAccountsAvailabilityPO.h"

@interface OKMarginAccountsAvailabilityAPI : NSObject

@property(nonatomic,strong) OKMarginAccountsAvailabilityRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsAvailabilityPO *po, NSError *error))completionHandler;

@end