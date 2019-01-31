//
//  OKMarginAccountsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKMarginAccountsPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    杠杆币对名称
@property(nonatomic,strong) NSString *balance; // balance    string    余额
@property(nonatomic,strong) NSString *hold; // hold    string    冻结(不可用)
@property(nonatomic,strong) NSString *available; // available    string    可用于交易数量
@property(nonatomic,strong) NSString *risk_rate; // risk_rate    string    风险率
@property(nonatomic,strong) NSString *liquidation_price; // liquidation_price    string    爆仓价
@property(nonatomic,strong) NSString *borrowed; // borrowed    string    已借币 （已借未还的部分）
@property(nonatomic,strong) NSString *lending_fee; // lending_fee    string    利息 （未还的利息）

@end