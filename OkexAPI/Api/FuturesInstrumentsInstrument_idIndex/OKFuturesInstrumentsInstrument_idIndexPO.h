//
//  OKFuturesInstrumentsInstrument_idIndexPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idIndexPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    指数币对，如BTC-USD
@property(nonatomic,strong) NSString *index; // index    Price    指数价格
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end