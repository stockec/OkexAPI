//
//  OKSpotInstrumentsTickerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotInstrumentsTickerRO.h"
#import "OKSpotInstrumentsTickerPO.h"

@interface OKSpotInstrumentsTickerAPI : NSObject

@property(nonatomic,strong) OKSpotInstrumentsTickerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotInstrumentsTickerPO *po, NSError *error))completionHandler;

@end