//
//  OKAccountWalletCurrencyAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountWalletCurrencyRO.h"
#import "OKAccountWalletCurrencyPO.h"

@interface OKAccountWalletCurrencyAPI : NSObject

@property(nonatomic,strong) OKAccountWalletCurrencyRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountWalletCurrencyPO *po, NSError *error))completionHandler;

@end