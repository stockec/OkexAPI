//
//  OKFuturesInstrumentsInstrument_idBookPO.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKFuturesInstrumentsInstrument_idBookPO.h"

@implementation OKFuturesInstrumentsInstrument_idBookDepthPO


@end

@implementation OKFuturesInstrumentsInstrument_idBookPO

+ (NSDictionary<NSString *,id> *)modelContainerPropertyGenericClass {
    return @{
        @"asks": [OKFuturesInstrumentsInstrument_idBookDepthPO class],
        @"bids": [OKFuturesInstrumentsInstrument_idBookDepthPO class],
    };
}

@end
