//
//  OKSwapInstrument_idAccountsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrument_idAccountsRO.h"
#import "OKSwapInstrument_idAccountsPO.h"

@interface OKSwapInstrument_idAccountsAPI : NSObject

@property(nonatomic,strong) OKSwapInstrument_idAccountsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrument_idAccountsPO *po, NSError *error))completionHandler;

@end