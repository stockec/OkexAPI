//
//  OKMarginAccountsInstrument_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginAccountsInstrument_idRO.h"
#import "OKMarginAccountsInstrument_idPO.h"

@interface OKMarginAccountsInstrument_idAPI : NSObject

@property(nonatomic,strong) OKMarginAccountsInstrument_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsInstrument_idPO *po, NSError *error))completionHandler;

@end