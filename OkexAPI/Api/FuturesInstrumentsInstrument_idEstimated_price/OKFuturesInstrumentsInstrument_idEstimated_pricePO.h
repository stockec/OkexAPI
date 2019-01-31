//
//  OKFuturesInstrumentsInstrument_idEstimated_pricePO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idEstimated_pricePO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic) NSInteger settlement_price; // settlement_price    Number    预估交割价
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end