//
//  OKSwapInstrumentsInstrument_idOpen_interestAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idOpen_interestRO.h"
#import "OKSwapInstrumentsInstrument_idOpen_interestPO.h"

@interface OKSwapInstrumentsInstrument_idOpen_interestAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idOpen_interestRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idOpen_interestPO *po, NSError *error))completionHandler;

@end