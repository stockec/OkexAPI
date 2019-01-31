//
//  OKAccountWalletAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountWalletRO.h"
#import "OKAccountWalletPO.h"

@interface OKAccountWalletAPI : NSObject

@property(nonatomic,strong) OKAccountWalletRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountWalletPO *po, NSError *error))completionHandler;

@end