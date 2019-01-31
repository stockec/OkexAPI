//
//  OKFuturesAccountsCurrencyLedgerPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesAccountsCurrencyLedgerPO : NSObject

@property(nonatomic,strong) NSString *ledger_id; // ledger_id    String    账单ID
@property(nonatomic,strong) NSString *currency; // currency    String    币种，如：btc
@property(nonatomic,strong) NSString *amount; // amount    String    变动数量
@property(nonatomic,strong) NSString *type; // type    String    流水来源
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    账单创建时间
@property(nonatomic,strong) NSString *details; // details    String    如果类型是交易产生的，则该details字段将包含order_id和instrument_id
@property(nonatomic,strong) NSString *order_id; // order_id    Long    订单ID
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213

@end