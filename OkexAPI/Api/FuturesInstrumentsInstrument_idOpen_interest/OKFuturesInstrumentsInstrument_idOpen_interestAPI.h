//
//  OKFuturesInstrumentsInstrument_idOpen_interestAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrument_idOpen_interestRO.h"
#import "OKFuturesInstrumentsInstrument_idOpen_interestPO.h"

@interface OKFuturesInstrumentsInstrument_idOpen_interestAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrument_idOpen_interestRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idOpen_interestPO *po, NSError *error))completionHandler;

@end