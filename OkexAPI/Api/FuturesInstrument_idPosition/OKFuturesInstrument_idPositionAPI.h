//
//  OKFuturesInstrument_idPositionAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrument_idPositionRO.h"
#import "OKFuturesInstrument_idPositionPO.h"

@interface OKFuturesInstrument_idPositionAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrument_idPositionRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(NSArray<OKFuturesInstrument_idPositionPO *> *pos, NSError *error))completionHandler;

@end
