//
//  OKSwapAccountsInstrument_idLeveragePO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapAccountsInstrument_idLeveragePO : NSObject

@property(nonatomic,strong) NSString *long_leverage; // long_leverage    String    多仓杠杆
@property(nonatomic,strong) NSString *margin_mode; // margin_mode    String    持仓模式
@property(nonatomic,strong) NSString *short_leverage; // short_leverage    String    空仓杠杆
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称

@end