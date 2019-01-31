//
//  OKFuturesInstrumentsInstrument_idPrice_limitAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrument_idPrice_limitRO.h"
#import "OKFuturesInstrumentsInstrument_idPrice_limitPO.h"

@interface OKFuturesInstrumentsInstrument_idPrice_limitAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrument_idPrice_limitRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idPrice_limitPO *po, NSError *error))completionHandler;

@end