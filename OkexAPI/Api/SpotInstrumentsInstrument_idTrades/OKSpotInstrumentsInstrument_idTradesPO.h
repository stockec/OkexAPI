//
//  OKSpotInstrumentsInstrument_idTradesPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotInstrumentsInstrument_idTradesPO : NSObject

@property(nonatomic,strong) NSString *timestamp; // timestamp    string    成交时间
@property(nonatomic,strong) NSString *trade_id; // trade_id    string    成交ID
@property(nonatomic,strong) NSString *price; // price    string    成交价格
@property(nonatomic,strong) NSString *size; // size    string    成交数量
@property(nonatomic,strong) NSString *side; // side    string    成交方向

@end