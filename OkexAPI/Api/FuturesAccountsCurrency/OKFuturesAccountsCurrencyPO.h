//
//  OKFuturesAccountsCurrencyPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesAccountsCurrencyPO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    币种，如：btc
@property(nonatomic,strong) NSString *margin_mode; // margin_mode    String    账户类型：全仓 crossed
@property(nonatomic,strong) NSString *equity; // equity    String    账户权益
@property(nonatomic,strong) NSString *total_avail_balance; // total_avail_balance    String    账户余额
@property(nonatomic,strong) NSString *margin; // margin    Double    保证金（挂单冻结+持仓已用）
@property(nonatomic,strong) NSString *realised_pnl; // realised_pnl    String    已实现盈亏
@property(nonatomic,strong) NSString *unrealised_pnl; // unrealised_pnl    String    未实现盈亏
@property(nonatomic,strong) NSString *margin_ratio; // margin_ratio    String    保证金率

@end