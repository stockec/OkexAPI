//
//  OKFuturesCancel_orderInstrument_idOrder_idPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesCancel_orderInstrument_idOrder_idPO : NSObject

@property(nonatomic,strong) NSString *order_id; // order_id    Long    订单ID
@property(nonatomic,strong) NSString *result; // result    String    撤单申请结果
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end