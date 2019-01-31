//
//  OKSwapAccountsInstrument_idHoldsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapAccountsInstrument_idHoldsRO.h"
#import "OKSwapAccountsInstrument_idHoldsPO.h"

@interface OKSwapAccountsInstrument_idHoldsAPI : NSObject

@property(nonatomic,strong) OKSwapAccountsInstrument_idHoldsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapAccountsInstrument_idHoldsPO *po, NSError *error))completionHandler;

@end