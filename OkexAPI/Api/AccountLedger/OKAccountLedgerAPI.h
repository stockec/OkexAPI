//
//  OKAccountLedgerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountLedgerRO.h"
#import "OKAccountLedgerPO.h"

@interface OKAccountLedgerAPI : NSObject

@property(nonatomic,strong) OKAccountLedgerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountLedgerPO *po, NSError *error))completionHandler;

@end