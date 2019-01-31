//
//  OKSwapInstrumentsInstrument_idLiquidationAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idLiquidationRO.h"
#import "OKSwapInstrumentsInstrument_idLiquidationPO.h"

@interface OKSwapInstrumentsInstrument_idLiquidationAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idLiquidationRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idLiquidationPO *po, NSError *error))completionHandler;

@end