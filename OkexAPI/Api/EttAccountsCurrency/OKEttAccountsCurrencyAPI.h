//
//  OKEttAccountsCurrencyAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKEttAccountsCurrencyRO.h"
#import "OKEttAccountsCurrencyPO.h"

@interface OKEttAccountsCurrencyAPI : NSObject

@property(nonatomic,strong) OKEttAccountsCurrencyRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKEttAccountsCurrencyPO *po, NSError *error))completionHandler;

@end