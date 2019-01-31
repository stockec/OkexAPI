//
//  OKFuturesInstrumentsInstrument_idPrice_limitPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idPrice_limitPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *highest; // highest    Double    最高买价
@property(nonatomic,strong) NSString *lowest; // lowest    Double    最低卖价
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end