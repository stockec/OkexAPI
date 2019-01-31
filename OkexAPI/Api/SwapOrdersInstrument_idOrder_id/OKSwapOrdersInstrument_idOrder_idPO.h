//
//  OKSwapOrdersInstrument_idOrder_idPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapOrdersInstrument_idOrder_idPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *size; // size    String    委托数量
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    创建时间
@property(nonatomic,strong) NSString *filled_qty; // filled_qty    String    成交数量
@property(nonatomic,strong) NSString *fee; // fee    String    手续费
@property(nonatomic,strong) NSString *order_id; // order_id    String    订单id
@property(nonatomic,strong) NSString *price; // price    String    委托价格
@property(nonatomic,strong) NSString *price_avg; // price_avg    String    成交均价
@property(nonatomic,strong) NSString *status; // status    String    订单状态(-2:失败 -1:撤销成功 0:等待成交 1:部分成交 2:完全成交)
@property(nonatomic,strong) NSString *type; // type    String    1:开多 2:开空 3:平多 4:平空
@property(nonatomic,strong) NSString *contract_val; // contract_val    String    合约面值

@end