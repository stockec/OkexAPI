//
//  OKSwapInstrumentsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *underlying_index; // underlying_index    String    合约币种，如BTC-USD-SWAP中前面的BTC
@property(nonatomic,strong) NSString *quote_currency; // quote_currency    String    计价货币，如BTC-USD-SWAP中的USD
@property(nonatomic,strong) NSString *coin; // coin    String    保证金币种，如BTC-USD-SWAP中BTC
@property(nonatomic,strong) NSString *contract_val; // contract_val    String    合约面值
@property(nonatomic,strong) NSString *listing; // listing    String    创建时间
@property(nonatomic,strong) NSString *delivery; // delivery    String    结算时间
@property(nonatomic,strong) NSString *size_increment; // size_increment    String    数量精度
@property(nonatomic,strong) NSString *tick_size; // tick_size    String    价格精度

@end