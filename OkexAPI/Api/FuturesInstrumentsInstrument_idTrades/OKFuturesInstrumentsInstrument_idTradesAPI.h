//
//  OKFuturesInstrumentsInstrument_idTradesAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrument_idTradesRO.h"
#import "OKFuturesInstrumentsInstrument_idTradesPO.h"

@interface OKFuturesInstrumentsInstrument_idTradesAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrument_idTradesRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idTradesPO *po, NSError *error))completionHandler;

@end