//
//  OKAccountCurrenciesAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountCurrenciesRO.h"
#import "OKAccountCurrenciesPO.h"

@interface OKAccountCurrenciesAPI : NSObject

@property(nonatomic,strong) OKAccountCurrenciesRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountCurrenciesPO *po, NSError *error))completionHandler;

@end