//
//  OKFuturesInstrumentsInstrument_idTickerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrument_idTickerRO.h"
#import "OKFuturesInstrumentsInstrument_idTickerPO.h"

@interface OKFuturesInstrumentsInstrument_idTickerAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrument_idTickerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idTickerPO *po, NSError *error))completionHandler;

@end