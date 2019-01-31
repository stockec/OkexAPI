//
//  OKFuturesInstrumentsInstrument_idTickerPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idTickerPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *last; // last    Price    最新成交价
@property(nonatomic,strong) NSString *best_ask; // best_ask    Price    卖一价
@property(nonatomic,strong) NSString *best_bid; // best_bid    Price    买一价
@property(nonatomic,strong) NSString *high_24h; // high_24h    Price    24小时最高价
@property(nonatomic,strong) NSString *low_24h; // low_24h    Price    24小时最低价
@property(nonatomic) NSInteger volume_24h; // volume_24h    Number    24小时成交量，按张数统计
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end