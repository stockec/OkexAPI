//
//  OKSpotInstrumentsTickerPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotInstrumentsTickerPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    币对名称
@property(nonatomic,strong) NSString *last; // last    string    最新成交价
@property(nonatomic,strong) NSString *best_bid; // best_bid    string    买一价
@property(nonatomic,strong) NSString *best_ask; // best_ask    string    卖一价
@property(nonatomic,strong) NSString *open_24h; // open_24h    string    24小时开盘价
@property(nonatomic,strong) NSString *high_24h; // high_24h    string    24小时最高价
@property(nonatomic,strong) NSString *low_24h; // low_24h    string    24小时最低价
@property(nonatomic,strong) NSString *base_volume_24h; // base_volume_24h    string    24小时成交量，按交易货币统计
@property(nonatomic,strong) NSString *quote_volume_24h; // quote_volume_24h    string    24小时成交量，按计价货币统计
@property(nonatomic,strong) NSString *timestamp; // timestamp    string    系统时间戳

@end