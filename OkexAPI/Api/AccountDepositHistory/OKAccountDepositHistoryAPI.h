//
//  OKAccountDepositHistoryAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountDepositHistoryRO.h"
#import "OKAccountDepositHistoryPO.h"

@interface OKAccountDepositHistoryAPI : NSObject

@property(nonatomic,strong) OKAccountDepositHistoryRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountDepositHistoryPO *po, NSError *error))completionHandler;

@end