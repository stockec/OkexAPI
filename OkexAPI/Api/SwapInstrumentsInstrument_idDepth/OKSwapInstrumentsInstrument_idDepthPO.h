//
//  OKSwapInstrumentsInstrument_idDepthPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idDepthItemPO : NSObject

@property(nonatomic,strong) NSString *price;
@property(nonatomic,strong) NSNumber *size;

@end

@interface OKSwapInstrumentsInstrument_idDepthPO : NSObject

@property(nonatomic,strong) NSArray *asks;
@property(nonatomic,strong) NSArray *bids;

@property(nonatomic,strong) NSArray<OKSwapInstrumentsInstrument_idDepthItemPO *> *askPOs;
@property(nonatomic,strong) NSArray<OKSwapInstrumentsInstrument_idDepthItemPO *> *bidPOs;

@end
