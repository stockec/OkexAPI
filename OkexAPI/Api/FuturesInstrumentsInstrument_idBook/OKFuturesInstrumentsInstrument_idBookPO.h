//
//  OKFuturesInstrumentsInstrument_idBookPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idBookDepthPO : NSObject

@property(nonatomic,strong) NSString *price;
@property(nonatomic,strong) NSNumber *size;

@end

@interface OKFuturesInstrumentsInstrument_idBookPO : NSObject <YYModel>

@property(nonatomic,strong) NSArray<OKFuturesInstrumentsInstrument_idBookDepthPO *> *asks;
@property(nonatomic,strong) NSArray<OKFuturesInstrumentsInstrument_idBookDepthPO *> *bids;

@end
