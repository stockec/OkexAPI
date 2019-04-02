//
//  OKSwapInstrumentsInstrument_idCandlesAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idCandlesRO.h"
#import "OKSwapInstrumentsInstrument_idCandlesPO.h"

@interface OKSwapInstrumentsInstrument_idCandlesAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idCandlesRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(NSArray<OKSwapInstrumentsInstrument_idCandlesPO *> *pos, NSError *error))completionHandler;

@end
