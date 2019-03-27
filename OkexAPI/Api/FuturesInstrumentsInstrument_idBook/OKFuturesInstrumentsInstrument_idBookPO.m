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

- (NSArray<OKFuturesInstrumentsInstrument_idBookDepthPO *> *)bidPOs {
    NSMutableArray *askPos = [NSMutableArray array];
    for (NSArray *arr in _bids) {
        NSString *price = [arr firstObject];
        NSString *size = [arr objectAtIndex:1];
        OKFuturesInstrumentsInstrument_idBookDepthPO *po = [OKFuturesInstrumentsInstrument_idBookDepthPO new];
        po.price = price;
        po.size = size;
        [askPos addObject:po];
    }
    return askPos;
}

- (NSArray<OKFuturesInstrumentsInstrument_idBookDepthPO *> *)askPOs {
    NSMutableArray *askPos = [NSMutableArray array];
    for (NSArray *arr in _asks) {
        NSString *price = [arr firstObject];
        NSString *size = [arr objectAtIndex:1];
        OKFuturesInstrumentsInstrument_idBookDepthPO *po = [OKFuturesInstrumentsInstrument_idBookDepthPO new];
        po.price = price;
        po.size = size;
        [askPos addObject:po];
    }
    return askPos;
}

@end
