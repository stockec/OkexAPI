//
//  OKSwapInstrumentsInstrument_idPrice_limitAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idPrice_limitRO.h"
#import "OKSwapInstrumentsInstrument_idPrice_limitPO.h"

@interface OKSwapInstrumentsInstrument_idPrice_limitAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idPrice_limitRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idPrice_limitPO *po, NSError *error))completionHandler;

@end