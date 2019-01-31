//
//  OKMarginAccountsInstrument_idBorrowedAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginAccountsInstrument_idBorrowedRO.h"
#import "OKMarginAccountsInstrument_idBorrowedPO.h"

@interface OKMarginAccountsInstrument_idBorrowedAPI : NSObject

@property(nonatomic,strong) OKMarginAccountsInstrument_idBorrowedRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsInstrument_idBorrowedPO *po, NSError *error))completionHandler;

@end