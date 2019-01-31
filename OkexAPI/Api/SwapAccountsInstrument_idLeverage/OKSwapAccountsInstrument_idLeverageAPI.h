//
//  OKSwapAccountsInstrument_idLeverageAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapAccountsInstrument_idLeverageRO.h"
#import "OKSwapAccountsInstrument_idLeveragePO.h"

@interface OKSwapAccountsInstrument_idLeverageAPI : NSObject

@property(nonatomic,strong) OKSwapAccountsInstrument_idLeverageRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapAccountsInstrument_idLeveragePO *po, NSError *error))completionHandler;

@end