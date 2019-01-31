//
//  OKMarginCancel_batch_ordersPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKMarginCancel_batch_ordersPO : NSObject

@property(nonatomic,strong) NSString *order_id; // order_id    list<string>    订单ID
@property(nonatomic,strong) NSString *client_oid; // client_oid    string    由您设置的订单ID来识别您的订单
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    币种，如btc-usdt
@property(nonatomic,strong) NSString *result; // result    boolean    撤单结果。若是撤单失败，将给出错误码提示

@end