//
//  OKSwapCancel_orderInstrument_idOrder_idRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapCancel_orderInstrument_idOrder_idRO : NSObject

@property(nonatomic,strong) NSString *order_id; // order_id    String    是    订单id
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约名称，如BTC-USD-SWAP

@end