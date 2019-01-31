//
//  OKAccountCurrenciesPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountCurrenciesPO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    币种名称，如btc
@property(nonatomic,strong) NSString *name; // name    String    币种中文名称，不显示则无对应名称
@property(nonatomic) NSInteger can_deposit; // can_deposit    number    是否可充值，0表示不可充值，1表示可以充值
@property(nonatomic) NSInteger can_withdraw; // can_withdraw    number    是否可提币，0表示不可提币，1表示可以提币
@property(nonatomic) NSInteger min_withdrawal; // min_withdrawal    number    币种最小提币量

@end