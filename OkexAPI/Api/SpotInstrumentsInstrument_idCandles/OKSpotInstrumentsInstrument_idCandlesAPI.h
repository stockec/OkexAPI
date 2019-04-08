//
//  OKSpotInstrumentsInstrument_idCandlesAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotInstrumentsInstrument_idCandlesRO.h"
#import "OKSpotInstrumentsInstrument_idCandlesPO.h"

@interface OKSpotInstrumentsInstrument_idCandlesAPI : NSObject

@property(nonatomic,strong) OKSpotInstrumentsInstrument_idCandlesRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(NSArray<OKSpotInstrumentsInstrument_idCandlesPO *> *pos, NSError *error))completionHandler;

@end
