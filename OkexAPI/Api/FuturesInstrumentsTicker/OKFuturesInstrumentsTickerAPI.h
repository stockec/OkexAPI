//
//  OKFuturesInstrumentsTickerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsTickerRO.h"
#import "OKFuturesInstrumentsTickerPO.h"

@interface OKFuturesInstrumentsTickerAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsTickerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsTickerPO *po, NSError *error))completionHandler;

@end