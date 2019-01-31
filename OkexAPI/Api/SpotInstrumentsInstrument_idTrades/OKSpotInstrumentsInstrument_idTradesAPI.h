//
//  OKSpotInstrumentsInstrument_idTradesAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotInstrumentsInstrument_idTradesRO.h"
#import "OKSpotInstrumentsInstrument_idTradesPO.h"

@interface OKSpotInstrumentsInstrument_idTradesAPI : NSObject

@property(nonatomic,strong) OKSpotInstrumentsInstrument_idTradesRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotInstrumentsInstrument_idTradesPO *po, NSError *error))completionHandler;

@end