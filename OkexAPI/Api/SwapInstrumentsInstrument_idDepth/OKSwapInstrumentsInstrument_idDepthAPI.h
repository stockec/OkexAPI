//
//  OKSwapInstrumentsInstrument_idDepthAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idDepthRO.h"
#import "OKSwapInstrumentsInstrument_idDepthPO.h"

@interface OKSwapInstrumentsInstrument_idDepthAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idDepthRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idDepthPO *po, NSError *error))completionHandler;

@end