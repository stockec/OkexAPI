//
//  OKSwapInstrumentsInstrument_idFunding_timeAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idFunding_timeRO.h"
#import "OKSwapInstrumentsInstrument_idFunding_timePO.h"

@interface OKSwapInstrumentsInstrument_idFunding_timeAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idFunding_timeRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idFunding_timePO *po, NSError *error))completionHandler;

@end