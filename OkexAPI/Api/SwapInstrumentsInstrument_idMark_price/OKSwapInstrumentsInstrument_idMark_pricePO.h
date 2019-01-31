//
//  OKSwapInstrumentsInstrument_idMark_pricePO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idMark_pricePO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *mark_price; // mark_price    String    标记价格
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end