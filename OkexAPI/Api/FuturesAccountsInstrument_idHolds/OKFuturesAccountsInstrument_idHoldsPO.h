//
//  OKFuturesAccountsInstrument_idHoldsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesAccountsInstrument_idHoldsPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *amount; // amount    String    冻结数量
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    查询时间

@end