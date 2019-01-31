//
//  OKFuturesOrdersInstrument_idPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesOrdersInstrument_idPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic) NSInteger size; // size    Number    数量
@property(nonatomic,strong) NSString *timestamp; // timestamp    Date    委托时间
@property(nonatomic) NSInteger filled_qty; // filled_qty    Number    成交数量
@property(nonatomic,strong) NSString *fee; // fee    Price    手续费
@property(nonatomic,strong) NSString *order_id; // order_id    String    订单ID
@property(nonatomic,strong) NSString *price; // price    Price    订单价格
@property(nonatomic,strong) NSString *price_avg; // price_avg    Price    平均价格
@property(nonatomic) NSInteger status; // status    Number    订单状态(-1.撤单成功；0:等待成交 1:部分成交 2:全部成交 ）
@property(nonatomic) NSInteger type; // type    Number    订单类型(1:开多 2:开空 3:平多 4:平空)
@property(nonatomic,strong) NSString *contract_val; // contract_val    Price    合约面值
@property(nonatomic) NSInteger leverage; // leverage    Number    杠杆倍数 value:10/20 默认10

@end