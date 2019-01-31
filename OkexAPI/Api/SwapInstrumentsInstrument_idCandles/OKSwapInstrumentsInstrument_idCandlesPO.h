//
//  OKSwapInstrumentsInstrument_idCandlesPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idCandlesPO : NSObject

@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间
@property(nonatomic,strong) NSString *open; // open    String    开盘价格
@property(nonatomic,strong) NSString *high; // high    String    最高价格
@property(nonatomic,strong) NSString *low; // low    String    最低价格
@property(nonatomic,strong) NSString *close; // close    String    收盘价格
@property(nonatomic,strong) NSString *volume; // volume    String    交易量(按张折算)
@property(nonatomic,strong) NSString *currency_volume; // currency_volume    String    交易量（按币折算）

@end