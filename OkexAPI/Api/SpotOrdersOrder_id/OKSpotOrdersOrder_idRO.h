//
//  OKSpotOrdersOrder_idRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotOrdersOrder_idRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    [必填]币对
@property(nonatomic,strong) NSString *order_id; // order_id    string    [必填]订单ID

@end