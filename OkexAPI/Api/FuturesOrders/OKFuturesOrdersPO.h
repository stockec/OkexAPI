//
//  OKFuturesOrdersPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesOrdersPO : NSObject

@property(nonatomic,strong) NSString *order_info; // order_info    String    订单信息
@property(nonatomic,strong) NSString *order_id; // order_id    String    订单ID，下单失败时，此字段值为-1
@property(nonatomic,strong) NSString *client_oid; // client_oid    String    由您设置的订单ID来识别您的订单
@property(nonatomic,strong) NSString *error_code; // error_code    Int    错误码，下单成功时为0，下单失败时会显示相应错误码
@property(nonatomic,strong) NSString *error_message; // error_message    String    错误信息，下单成功时为空，下单失败时会显示错误信息
@property(nonatomic,strong) NSString *result; // result    String    调用接口返回结果

@end