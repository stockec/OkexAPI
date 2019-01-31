//
//  OKSpotAccountsCurrencyAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotAccountsCurrencyRO.h"
#import "OKSpotAccountsCurrencyPO.h"

@interface OKSpotAccountsCurrencyAPI : NSObject

@property(nonatomic,strong) OKSpotAccountsCurrencyRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotAccountsCurrencyPO *po, NSError *error))completionHandler;

@end