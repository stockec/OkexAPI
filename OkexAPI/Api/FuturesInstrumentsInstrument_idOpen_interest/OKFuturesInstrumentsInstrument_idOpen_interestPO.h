//
//  OKFuturesInstrumentsInstrument_idOpen_interestPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idOpen_interestPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic) NSInteger amount; // amount    Number    总持仓量
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end