//
//  OKMarginCancel_ordersOrder_idRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKMarginCancel_ordersOrder_idRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    是    提供此参数则撤销指定币对的相应订单，如果不提供此参数则返回错误码
@property(nonatomic,strong) NSString *client_oid; // client_oid    string    否    由您设置的订单ID来识别您的订单
@property(nonatomic,strong) NSString *order_id; // order_id    string    是    订单ID

@end