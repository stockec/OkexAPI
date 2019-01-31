//
//  OKFuturesInstrumentsInstrument_idEstimated_priceAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrument_idEstimated_priceRO.h"
#import "OKFuturesInstrumentsInstrument_idEstimated_pricePO.h"

@interface OKFuturesInstrumentsInstrument_idEstimated_priceAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrument_idEstimated_priceRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idEstimated_pricePO *po, NSError *error))completionHandler;

@end