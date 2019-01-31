//
//  OKSwapInstrumentsTickerAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsTickerRO.h"
#import "OKSwapInstrumentsTickerPO.h"

@interface OKSwapInstrumentsTickerAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsTickerRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsTickerPO *po, NSError *error))completionHandler;

@end