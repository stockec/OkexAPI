//
//  OKAccountWithdrawalAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountWithdrawalRO.h"
#import "OKAccountWithdrawalPO.h"

@interface OKAccountWithdrawalAPI : NSObject

@property(nonatomic,strong) OKAccountWithdrawalRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountWithdrawalPO *po, NSError *error))completionHandler;

@end