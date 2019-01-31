//
//  OKFuturesInstrumentsInstrumentidCandlesAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrumentidCandlesRO.h"
#import "OKFuturesInstrumentsInstrumentidCandlesPO.h"

@interface OKFuturesInstrumentsInstrumentidCandlesAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrumentidCandlesRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrumentidCandlesPO *po, NSError *error))completionHandler;

@end