//
//  OKMarginAccountsInstrument_idAvailabilityAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginAccountsInstrument_idAvailabilityRO.h"
#import "OKMarginAccountsInstrument_idAvailabilityPO.h"

@interface OKMarginAccountsInstrument_idAvailabilityAPI : NSObject

@property(nonatomic,strong) OKMarginAccountsInstrument_idAvailabilityRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsInstrument_idAvailabilityPO *po, NSError *error))completionHandler;

@end