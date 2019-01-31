//
//  OKSwapInstrumentsInstrument_idPrice_limitPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idPrice_limitPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *highest; // highest    String    最高买价
@property(nonatomic,strong) NSString *lowest; // lowest    String    最低卖价
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end