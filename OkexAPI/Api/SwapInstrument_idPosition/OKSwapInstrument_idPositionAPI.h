//
//  OKSwapInstrument_idPositionAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrument_idPositionRO.h"
#import "OKSwapInstrument_idPositionPO.h"

@interface OKSwapInstrument_idPositionAPI : NSObject

@property(nonatomic,strong) OKSwapInstrument_idPositionRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrument_idPositionPO *po, NSError *error))completionHandler;

@end