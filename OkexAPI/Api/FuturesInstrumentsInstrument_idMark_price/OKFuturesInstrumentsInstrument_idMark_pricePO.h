//
//  OKFuturesInstrumentsInstrument_idMark_pricePO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idMark_pricePO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *mark_price; // mark_price    Double    指定合约品种的标记价格
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    返回请求时间

@end