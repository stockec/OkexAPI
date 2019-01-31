//
//  OKFuturesInstrumentsInstrument_idBookRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idBookRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约ID，如BTC-USD-180213
@property(nonatomic,strong) NSString *size; // size    Int    否    返回深度数量，最大值可传200，即买卖深度共400条

@end