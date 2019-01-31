//
//  OKSpotAccountsCurrencyLedgerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotAccountsCurrencyLedgerRO.h"
#import "OKSpotAccountsCurrencyLedgerPO.h"

@interface OKSpotAccountsCurrencyLedgerAPI : NSObject

@property(nonatomic,strong) OKSpotAccountsCurrencyLedgerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotAccountsCurrencyLedgerPO *po, NSError *error))completionHandler;

@end