//
//  OKSwapInstrumentsInstrument_idCandlesRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idCandlesRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *start; // start    String    否    开始时间，必须是ISO8601格式的时间
@property(nonatomic,strong) NSString *end; // end    String    否    结束时间，必须是ISO8601格式的时间
@property(nonatomic,strong) NSString *granularity; // granularity    String    否    时间颗粒度，时间粒度，以秒为单位，如[60/180/300 900/1800/3600/7200/14400/21600/43200/86400/604800]，详见下解释说明

@end