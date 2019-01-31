//
//  OKSwapInstrumentsInstrument_idTradesPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idTradesPO : NSObject

@property(nonatomic,strong) NSString *trade_id; // trade_id    String    成交id
@property(nonatomic,strong) NSString *price; // price    String    成交价格
@property(nonatomic,strong) NSString *size; // size    String    成交数量
@property(nonatomic,strong) NSString *side; // side    String    成交方向：sell，buy
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    成交时间

@end