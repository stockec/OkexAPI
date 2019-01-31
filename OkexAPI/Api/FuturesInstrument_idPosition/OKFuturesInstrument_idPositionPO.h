//
//  OKFuturesInstrument_idPositionPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrument_idPositionPO : NSObject

@property(nonatomic,strong) NSString *margin_mode; // margin_mode    String    账户类型：全仓 crossed
@property(nonatomic,strong) NSString *liquidation_price; // liquidation_price    String    预估爆仓价
@property(nonatomic,strong) NSString *long_qty; // long_qty    String    多仓数量
@property(nonatomic,strong) NSString *long_avail_qty; // long_avail_qty    String    多仓可平仓数量
@property(nonatomic,strong) NSString *long_avg_cost; // long_avg_cost    String    开仓平均价
@property(nonatomic,strong) NSString *long_settlement_price; // long_settlement_price    String    结算基准价
@property(nonatomic,strong) NSString *realised_pnl; // realised_pnl    String    已实现盈余
@property(nonatomic,strong) NSString *leverage; // leverage    String    杠杆倍数
@property(nonatomic,strong) NSString *short_qty; // short_qty    String    空仓数量
@property(nonatomic,strong) NSString *short_avail_qty; // short_avail_qty    String    空仓可平仓数量
@property(nonatomic,strong) NSString *short_avg_cost; // short_avg_cost    String    开仓平均价
@property(nonatomic,strong) NSString *short_settlement_price; // short_settlement_price    String    结算基准价
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *created_at; // created_at    String    创建时间
@property(nonatomic,strong) NSString *updated_at; // updated_at    String    最近一次加减仓的更新时间

@end