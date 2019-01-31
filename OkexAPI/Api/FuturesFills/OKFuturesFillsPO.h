//
//  OKFuturesFillsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesFillsPO : NSObject

@property(nonatomic,strong) NSString *trade_id; // trade_id    String    账单ID
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *price; // price    String    价格
@property(nonatomic,strong) NSString *order_qty; // order_qty    String    数量
@property(nonatomic,strong) NSString *order_id; // order_id    String    订单ID
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    订单创建时间
@property(nonatomic,strong) NSString *exec_type; // exec_type    String    流动性方向(T or M)
@property(nonatomic,strong) NSString *fee; // fee    String    手续费
@property(nonatomic,strong) NSString *side; // side    String    订单方向(buy or sell)

@end