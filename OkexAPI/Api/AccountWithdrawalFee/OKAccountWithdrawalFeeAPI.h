//
//  OKAccountWithdrawalFeeAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountWithdrawalFeeRO.h"
#import "OKAccountWithdrawalFeePO.h"

@interface OKAccountWithdrawalFeeAPI : NSObject

@property(nonatomic,strong) OKAccountWithdrawalFeeRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountWithdrawalFeePO *po, NSError *error))completionHandler;

@end