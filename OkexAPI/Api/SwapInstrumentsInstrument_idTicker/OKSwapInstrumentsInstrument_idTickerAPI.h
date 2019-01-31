//
//  OKSwapInstrumentsInstrument_idTickerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idTickerRO.h"
#import "OKSwapInstrumentsInstrument_idTickerPO.h"

@interface OKSwapInstrumentsInstrument_idTickerAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idTickerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idTickerPO *po, NSError *error))completionHandler;

@end