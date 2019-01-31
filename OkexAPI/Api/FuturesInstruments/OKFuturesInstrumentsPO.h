//
//  OKFuturesInstrumentsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *underlying_index; // underlying_index    String    交易货币币种，如：btc-usd中的btc
@property(nonatomic,strong) NSString *quote_currency; // quote_currency    String    计价货币币种，如：btc-usd中的usd
@property(nonatomic,strong) NSString *contract_val; // contract_val    Int    合约面值(美元)
@property(nonatomic,strong) NSString *listing; // listing    String    上线日期
@property(nonatomic,strong) NSString *delivery; // delivery    String    交割日期
@property(nonatomic,strong) NSString *tick_size; // tick_size    Double    下单价格精度
@property(nonatomic,strong) NSString *trade_increment; // trade_increment    Int    下单数量精度

@end