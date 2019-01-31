//
//  OKSpotAccountsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotAccountsRO.h"
#import "OKSpotAccountsPO.h"

@interface OKSpotAccountsAPI : NSObject

@property(nonatomic,strong) OKSpotAccountsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotAccountsPO *po, NSError *error))completionHandler;

@end