//
//  OKSpotFillsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotFillsPO : NSObject

@property(nonatomic,strong) NSString *ledger_id; // ledger_id    string    账单ID
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    币对名称
@property(nonatomic,strong) NSString *price; // price    string    价格
@property(nonatomic,strong) NSString *size; // size    string    数量
@property(nonatomic,strong) NSString *order_id; // order_id    string    订单ID
@property(nonatomic,strong) NSString *timestamp; // timestamp    string    订单创建时间
@property(nonatomic,strong) NSString *exec_type; // exec_type    string    流动性方向(T or M)
@property(nonatomic,strong) NSString *fee; // fee    string    手续费
@property(nonatomic,strong) NSString *side; // side    string    账单方向（buy ,sell or points_fee）

@end