//
//  OKAccountWithdrawalHistoryCurrencyAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountWithdrawalHistoryCurrencyRO.h"
#import "OKAccountWithdrawalHistoryCurrencyPO.h"

@interface OKAccountWithdrawalHistoryCurrencyAPI : NSObject

@property(nonatomic,strong) OKAccountWithdrawalHistoryCurrencyRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountWithdrawalHistoryCurrencyPO *po, NSError *error))completionHandler;

@end