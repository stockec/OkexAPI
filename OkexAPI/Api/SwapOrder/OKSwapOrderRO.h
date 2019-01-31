//
//  OKSwapOrderRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapOrderRO : NSObject

@property(nonatomic,strong) NSString *client_oid; // client_oid    String    否    由您设置的订单id来唯一标识您的订单，数字+字母（大小写）或者纯字母（大小写）类型，1-32位
@property(nonatomic,strong) NSString *size; // size    String    是    下单数量
@property(nonatomic,strong) NSString *type; // type    String    是    可填参数：1:开多 2:开空 3:平多 4:平空
@property(nonatomic,strong) NSString *match_price; // match_price    String    否    是否以对手价下单 0:不是 1:是
@property(nonatomic,strong) NSString *price; // price    String    是    委托价格
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约名称，如BTC-USD-SWAP

@end