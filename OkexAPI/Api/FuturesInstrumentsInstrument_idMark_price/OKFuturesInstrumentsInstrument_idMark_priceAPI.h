//
//  OKFuturesInstrumentsInstrument_idMark_priceAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrument_idMark_priceRO.h"
#import "OKFuturesInstrumentsInstrument_idMark_pricePO.h"

@interface OKFuturesInstrumentsInstrument_idMark_priceAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrument_idMark_priceRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idMark_pricePO *po, NSError *error))completionHandler;

@end