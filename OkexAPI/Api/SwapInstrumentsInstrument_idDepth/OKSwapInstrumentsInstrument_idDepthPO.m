//
//  OKSwapInstrumentsInstrument_idDepthPO.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSwapInstrumentsInstrument_idDepthPO.h"

@implementation OKSwapInstrumentsInstrument_idDepthItemPO


@end

@implementation OKSwapInstrumentsInstrument_idDepthPO

- (NSArray<OKSwapInstrumentsInstrument_idDepthItemPO *> *)bidPOs {
    NSMutableArray *askPos = [NSMutableArray array];
    for (NSArray *arr in _bids) {
        NSString *price = [arr firstObject];
        NSNumber *size = [arr objectAtIndex:1];
        OKSwapInstrumentsInstrument_idDepthItemPO *po = [OKSwapInstrumentsInstrument_idDepthItemPO new];
        po.price = price;
        po.size = size;
        [askPos addObject:po];
    }
    return askPos;
}

- (NSArray<OKSwapInstrumentsInstrument_idDepthItemPO *> *)askPOs {
    NSMutableArray *askPos = [NSMutableArray array];
    for (NSArray *arr in _asks) {
        NSString *price = [arr firstObject];
        NSNumber *size = [arr objectAtIndex:1];
        OKSwapInstrumentsInstrument_idDepthItemPO *po = [OKSwapInstrumentsInstrument_idDepthItemPO new];
        po.price = price;
        po.size = size;
        [askPos addObject:po];
    }
    return askPos;
}

@end
