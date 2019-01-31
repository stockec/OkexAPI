//
//  OKSwapFillsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapFillsPO : NSObject

@property(nonatomic,strong) NSString *trade_id; // trade_id    String    成交id
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *order_id; // order_id    String    订单id
@property(nonatomic,strong) NSString *price; // price    String    成交价格
@property(nonatomic,strong) NSString *order_qty; // order_qty    String    成交数量
@property(nonatomic,strong) NSString *fee; // fee    String    手续费
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    创建时间
@property(nonatomic,strong) NSString *exec_type; // exec_type    String    流动性方向，T：taker M：maker
@property(nonatomic,strong) NSString *side; // side    String    订单方向

@end