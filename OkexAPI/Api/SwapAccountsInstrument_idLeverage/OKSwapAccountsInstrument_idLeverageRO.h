//
//  OKSwapAccountsInstrument_idLeverageRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapAccountsInstrument_idLeverageRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *leverage; // leverage    String    是    新杠杆倍数，可填写1-40之间的整数
@property(nonatomic,strong) NSString *side; // side    String    是    方向:1.逐仓-多仓 2.逐仓-空仓 3.全仓

@end