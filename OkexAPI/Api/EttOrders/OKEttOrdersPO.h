//
//  OKEttOrdersPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKEttOrdersPO : NSObject

@property(nonatomic,strong) NSString *order_id; // order_id    订单ID
@property(nonatomic,strong) NSString *price; // price    价格
@property(nonatomic,strong) NSString *size; // size    ett数量
@property(nonatomic,strong) NSString *amount; // amount    申购/赎回币种总量
@property(nonatomic,strong) NSString *ett; // ett    ett名称
@property(nonatomic,strong) NSString *type; // type    订单类型
@property(nonatomic,strong) NSString *created_at; // created_at    订单创建时间
@property(nonatomic,strong) NSString *status; // status    订单状态

@end