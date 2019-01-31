//
//  OKSpotBatch_ordersRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotBatch_ordersRO : NSObject

@property(nonatomic,strong) NSString *client_oid; // client_oid    string    否    由您设置的订单ID来识别您的订单
@property(nonatomic,strong) NSString *type; // type    string    是    limit,market(默认是limit)
@property(nonatomic,strong) NSString *side; // side    string    是    buy or sell
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    是    币对名称
@property(nonatomic,strong) NSString *margin_trading; // margin_trading    string    否    下单类型(当前为币币交易，请求值为1)

@end