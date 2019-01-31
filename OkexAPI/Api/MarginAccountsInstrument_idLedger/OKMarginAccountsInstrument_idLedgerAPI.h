//
//  OKMarginAccountsInstrument_idLedgerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginAccountsInstrument_idLedgerRO.h"
#import "OKMarginAccountsInstrument_idLedgerPO.h"

@interface OKMarginAccountsInstrument_idLedgerAPI : NSObject

@property(nonatomic,strong) OKMarginAccountsInstrument_idLedgerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsInstrument_idLedgerPO *po, NSError *error))completionHandler;

@end