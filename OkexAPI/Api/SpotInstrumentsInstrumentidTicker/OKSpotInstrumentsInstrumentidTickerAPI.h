//
//  OKSpotInstrumentsInstrumentidTickerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotInstrumentsInstrumentidTickerRO.h"
#import "OKSpotInstrumentsInstrumentidTickerPO.h"

@interface OKSpotInstrumentsInstrumentidTickerAPI : NSObject

@property(nonatomic,strong) OKSpotInstrumentsInstrumentidTickerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotInstrumentsInstrumentidTickerPO *po, NSError *error))completionHandler;

@end