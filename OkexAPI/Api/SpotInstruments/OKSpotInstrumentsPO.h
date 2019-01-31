//
//  OKSpotInstrumentsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotInstrumentsPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    币对名称
@property(nonatomic,strong) NSString *base_currency; // base_currency    string    交易货币币种
@property(nonatomic,strong) NSString *quote_currency; // quote_currency    string    计价货币币种
@property(nonatomic,strong) NSString *min_size; // min_size    string    最小交易数量
@property(nonatomic,strong) NSString *size_increment; // size_increment    string    交易货币数量精度
@property(nonatomic,strong) NSString *tick_size; // tick_size    string    交易价格精度

@end