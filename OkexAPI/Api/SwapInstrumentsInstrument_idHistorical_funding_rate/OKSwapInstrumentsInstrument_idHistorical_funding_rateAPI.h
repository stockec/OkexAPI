//
//  OKSwapInstrumentsInstrument_idHistorical_funding_rateAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idHistorical_funding_rateRO.h"
#import "OKSwapInstrumentsInstrument_idHistorical_funding_ratePO.h"

@interface OKSwapInstrumentsInstrument_idHistorical_funding_rateAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idHistorical_funding_rateRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idHistorical_funding_ratePO *po, NSError *error))completionHandler;

@end