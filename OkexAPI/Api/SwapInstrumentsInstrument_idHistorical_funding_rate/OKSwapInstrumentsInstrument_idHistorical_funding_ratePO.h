//
//  OKSwapInstrumentsInstrument_idHistorical_funding_ratePO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idHistorical_funding_ratePO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *funding_rate; // funding_rate    String    资金费率
@property(nonatomic,strong) NSString *realized_rate; // realized_rate    String    实际资金费率
@property(nonatomic,strong) NSString *interest_rate; // interest_rate    String    利率
@property(nonatomic,strong) NSString *funding_time; // funding_time    String    结算时间

@end