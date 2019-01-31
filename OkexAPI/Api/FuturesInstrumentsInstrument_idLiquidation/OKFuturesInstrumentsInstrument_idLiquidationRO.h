//
//  OKFuturesInstrumentsInstrument_idLiquidationRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idLiquidationRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *status; // status    String    是    状态(0：最近7天未成交 1:最近7天已成交 )
@property(nonatomic) NSInteger from; // from    Number    否    请求此页码的分页内容（举例页码为：1，2，3，4，5。from 4 只返回第4页，to 4只返回第3页）
@property(nonatomic) NSInteger to; // to    Number    否    请求此页码之前的分页内容（举例页码为：1，2，3，4，5。from 4 只返回第4页，to 4只返回第3页）
@property(nonatomic) NSInteger limit; // limit    Number    否    分页返回的结果集数量，默认为100，最大为100，按时间顺序排列，越早下单的在前面

@end