//
//  OKSwapAccountsInstrument_idSettingsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapAccountsInstrument_idSettingsPO : NSObject

@property(nonatomic) NSInteger long_leverage; // long_leverage    Number    多仓杠杆
@property(nonatomic,strong) NSString *margin_mode; // margin_mode    String    持仓模式
@property(nonatomic) NSInteger short_leverage; // short_leverage    Number    空仓杠杆
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称

@end