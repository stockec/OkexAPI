//
//  OKSpotInstrumentsInstrument_idCandlesRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotInstrumentsInstrument_idCandlesRO : NSObject

@property(nonatomic,strong) NSString *start; // start    string    [非必填]开始时间(ISO 8601标准)
@property(nonatomic,strong) NSString *end; // end    string    [非必填]结束时间(ISO 8601标准)
@property(nonatomic,strong) NSString *granularity; // granularity    integer    [非必填]以秒来计量的时间粒度
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    [必填]币对

@end