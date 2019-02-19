//
//  OKSwapInstrument_idPositionPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

@interface OKSwapInstrument_idPositionHoldingPO : NSObject

@property(nonatomic,strong) NSString *liquidation_price; // liquidation_price    String    预估爆仓价
@property(nonatomic,strong) NSString *position; // position    String    持仓数量
@property(nonatomic,strong) NSString *avail_position; // avail_position    String    可平数量
@property(nonatomic,strong) NSString *margin; // margin    String    保证金
@property(nonatomic,strong) NSString *avg_cost; // avg_cost    String    开仓平均价
@property(nonatomic,strong) NSString *settlement_price; // settlement_price    String    结算基准价
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称
@property(nonatomic,strong) NSString *leverage; // leverage    String    杠杆
@property(nonatomic,strong) NSString *realized_pnl; // realized_pnl    String    已实现盈亏
@property(nonatomic,strong) NSString *side; // side    String    方向
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    最近一次加减仓的更新时间

@end

@interface OKSwapInstrument_idPositionPO : NSObject <YYModel>

@property(nonatomic,strong) NSString *margin_mode; // margin_mode    String    仓位模式:全仓crossed
@property(nonatomic,strong) NSArray *holding; // margin_mode    String    仓位模式:全仓crossed

@end
