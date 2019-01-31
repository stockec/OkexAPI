//
//  OKSpotInstrumentsInstrument_idCandlesPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotInstrumentsInstrument_idCandlesPO : NSObject

@property(nonatomic,strong) NSString *time; // time    string    开始时间
@property(nonatomic,strong) NSString *open; // open    Double    开盘价格
@property(nonatomic,strong) NSString *high; // high    Double    最高价格
@property(nonatomic,strong) NSString *low; // low    Double    最低价格
@property(nonatomic,strong) NSString *close; // close    Double    收盘价格
@property(nonatomic,strong) NSString *volume; // volume    Double    交易量

@end