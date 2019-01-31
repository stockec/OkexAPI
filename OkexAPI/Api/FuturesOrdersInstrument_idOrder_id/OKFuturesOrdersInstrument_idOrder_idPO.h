//
//  OKFuturesOrdersInstrument_idOrder_idPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesOrdersInstrument_idOrder_idPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *size; // size    String    数量
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    委托时间
@property(nonatomic,strong) NSString *filled_qty; // filled_qty    String    成交数量
@property(nonatomic,strong) NSString *fee; // fee    String    手续费
@property(nonatomic,strong) NSString *order_id; // order_id    String    订单ID
@property(nonatomic,strong) NSString *price; // price    String    订单价格
@property(nonatomic,strong) NSString *price_avg; // price_avg    String    平均价格
@property(nonatomic,strong) NSString *status; // status    String    订单状态(-1.撤单成功；0:等待成交 1:部分成交 2:全部成交 ）
@property(nonatomic,strong) NSString *type; // type    String    订单类型(1:开多 2:开空 3:平多 4:平空)
@property(nonatomic,strong) NSString *contract_val; // contract_val    String    合约面值
@property(nonatomic,strong) NSString *leverage; // leverage    String    杠杆倍数 value:10/20 默认10

@end