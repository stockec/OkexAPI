//
//  OKMarginAccountsInstrument_idLedgerRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKMarginAccountsInstrument_idLedgerRO : NSObject

@property(nonatomic,strong) NSString *type; // type    string    [非必填]1:转入 2:转出 3:借款 4:还款 5:计息 6:穿仓亏损 7:买入 8:卖出 若不传此参数则默认返回所有类型
@property(nonatomic,strong) NSString *from; // from    string    [非必填]请求此id之后(更新的数据)的分页内容（举例一列数：1，2，3，4，5。from 4 只有5，to 4有1，2，3）
@property(nonatomic,strong) NSString *to; // to    string    [非必填]请求此id之前(更旧的数据)的分页内容
@property(nonatomic,strong) NSString *limit; // limit    string    [非必填]分页返回的结果集数量，默认为100，最大为100(具体参见分页处的描述)
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    [必填]币对

@end