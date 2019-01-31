//
//  OKSwapInstrumentsInstrument_idDepthRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idDepthRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *size; // size    String    否    返回深度数量，最大值可传200，即买卖深度共400条

@end