//
//  OKSwapCancel_batch_ordersInstrument_idRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapCancel_batch_ordersInstrument_idRO : NSObject

@property(nonatomic,strong) NSString *ids; // ids    String    是    订单id列表
@property(nonatomic,strong) NSString *client_oids; // 由您设置的订单ID来识别您的订单,类型为字母（大小写）+数字或者纯字母（大小写）， 1-32位字符
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约名称，如BTC-USD-SWAP

@end
