//
//  OKSwapInstrument_idAccountsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrument_idAccountsPO : NSObject

@property(nonatomic,strong) NSString *equity; // equity    String    账户权益
@property(nonatomic,strong) NSString *fixed_balance; // fixed_balance    String    逐仓账户余额
@property(nonatomic,strong) NSString *total_avail_balance; // total_avail_balance    String    账户余额
@property(nonatomic,strong) NSString *margin; // margin    String    已用保证金
@property(nonatomic,strong) NSString *realized_pnl; // realized_pnl    String    已实现盈亏
@property(nonatomic,strong) NSString *unrealized_pnl; // unrealized_pnl    String    未实现盈亏
@property(nonatomic,strong) NSString *margin_ratio; // margin_ratio    String    保证金率
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称
@property(nonatomic,strong) NSString *margin_frozen; // margin_frozen    String    开仓冻结保证金
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    创建时间
@property(nonatomic,strong) NSString *margin_mode; // margin_mode    String    仓位模式：全仓 crossed 逐仓fixed

@end