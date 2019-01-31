//
//  OKFuturesInstrumentsInstrumentidCandlesRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrumentidCandlesRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *start; // start    String    否    开始时间(ISO UTC标准，例如：2018-06-20T02:31:00Z)
@property(nonatomic,strong) NSString *end; // end    String    否    结束时间(ISO UTC标准，例如：2018-06-20T02:31:00Z)
@property(nonatomic) NSInteger granularity; // granularity    Number    否    时间粒度，以秒为单位，如[60/180/300 900/1800/3600/7200/14400/21600/43200/86400/604800]，详见下解释说明
@property(nonatomic,strong) NSString *instrumentid;

@end