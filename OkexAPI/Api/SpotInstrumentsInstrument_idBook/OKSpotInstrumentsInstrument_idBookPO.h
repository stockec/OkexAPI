//
//  OKSpotInstrumentsInstrument_idBookPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotInstrumentsInstrument_idBookPO : NSObject

@property(nonatomic,strong) NSString *price; // price    string    价格
@property(nonatomic,strong) NSString *size; // size    string    数量
@property(nonatomic,strong) NSString *num_orders; // num_orders    integer    组成此条深度的订单数量
@property(nonatomic,strong) NSString *timestamp; // timestamp    string    时间戳

@end