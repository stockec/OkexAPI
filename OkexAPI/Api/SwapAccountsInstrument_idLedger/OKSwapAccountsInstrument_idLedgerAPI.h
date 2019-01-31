//
//  OKSwapAccountsInstrument_idLedgerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapAccountsInstrument_idLedgerRO.h"
#import "OKSwapAccountsInstrument_idLedgerPO.h"

@interface OKSwapAccountsInstrument_idLedgerAPI : NSObject

@property(nonatomic,strong) OKSwapAccountsInstrument_idLedgerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapAccountsInstrument_idLedgerPO *po, NSError *error))completionHandler;

@end