//
//  OKFuturesInstrumentsInstrument_idLiquidationAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrument_idLiquidationRO.h"
#import "OKFuturesInstrumentsInstrument_idLiquidationPO.h"

@interface OKFuturesInstrumentsInstrument_idLiquidationAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrument_idLiquidationRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idLiquidationPO *po, NSError *error))completionHandler;

@end