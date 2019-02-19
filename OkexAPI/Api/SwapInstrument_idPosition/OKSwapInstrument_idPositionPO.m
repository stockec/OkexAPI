//
//  OKSwapInstrument_idPositionPO.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSwapInstrument_idPositionPO.h"

@implementation OKSwapInstrument_idPositionHoldingPO


@end

@implementation OKSwapInstrument_idPositionPO

+ (NSDictionary<NSString *,id> *)modelContainerPropertyGenericClass {
    return @{@"holding": [OKSwapInstrument_idPositionHoldingPO class]};
}

@end
