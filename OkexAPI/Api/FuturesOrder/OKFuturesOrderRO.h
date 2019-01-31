//
//  OKFuturesOrderRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesOrderRO : NSObject

@property(nonatomic,strong) NSString *client_oid; // client_oid    String    否    由您设置的订单ID来识别您的订单
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *type; // type    String    是    1:开多2:开空3:平多4:平空
@property(nonatomic,strong) NSString *price; // price    price    是    每张合约的价格
@property(nonatomic) NSInteger size; // size    Number    是    买入或卖出合约的数量（以张计数）
@property(nonatomic,strong) NSString *match_price; // match_price    String    否    是否以对手价下单(0:不是 1:是)，默认为0，当取值为1时。price字段无效
@property(nonatomic) NSInteger leverage; // leverage    Number    是    要设定的杠杆倍数，10或20

@end