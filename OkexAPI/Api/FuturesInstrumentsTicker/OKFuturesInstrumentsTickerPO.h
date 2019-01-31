//
//  OKFuturesInstrumentsTickerPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsTickerPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *last; // last    Double    最新成交价
@property(nonatomic,strong) NSString *best_ask; // best_ask    Double    卖一价
@property(nonatomic,strong) NSString *best_bid; // best_bid    Double    买一价
@property(nonatomic,strong) NSString *high_24h; // high_24h    Double    24小时最高价
@property(nonatomic,strong) NSString *low_24h; // low_24h    Double    24小时最低价
@property(nonatomic,strong) NSString *volume_24h; // volume_24h    Int    24小时成交量，按张数统计
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end