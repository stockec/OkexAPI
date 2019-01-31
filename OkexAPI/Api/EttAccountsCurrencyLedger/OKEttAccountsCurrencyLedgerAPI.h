//
//  OKEttAccountsCurrencyLedgerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKEttAccountsCurrencyLedgerRO.h"
#import "OKEttAccountsCurrencyLedgerPO.h"

@interface OKEttAccountsCurrencyLedgerAPI : NSObject

@property(nonatomic,strong) OKEttAccountsCurrencyLedgerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKEttAccountsCurrencyLedgerPO *po, NSError *error))completionHandler;

@end