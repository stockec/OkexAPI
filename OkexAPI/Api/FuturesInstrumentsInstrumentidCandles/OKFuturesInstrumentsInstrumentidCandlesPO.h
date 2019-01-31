//
//  OKFuturesInstrumentsInstrumentidCandlesPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrumentidCandlesPO : NSObject

@property(nonatomic,strong) NSString *timestamp; // timestamp    Date    开始时间
@property(nonatomic,strong) NSString *open; // open    Price    开盘价格
@property(nonatomic,strong) NSString *high; // high    Price    最高价格
@property(nonatomic,strong) NSString *low; // low    Price    最低价格
@property(nonatomic,strong) NSString *close; // close    Price    收盘价格
@property(nonatomic) NSInteger volume; // volume    Number    交易量(张)
@property(nonatomic) NSInteger currency_volume; // currency_volume    Number    按币种折算的交易量

@end