//
//  OKSwapInstrumentsInstrument_idTradesAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idTradesRO.h"
#import "OKSwapInstrumentsInstrument_idTradesPO.h"

@interface OKSwapInstrumentsInstrument_idTradesAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idTradesRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idTradesPO *po, NSError *error))completionHandler;

@end