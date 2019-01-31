//
//  OKSpotAccountsCurrencyLedgerPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotAccountsCurrencyLedgerPO : NSObject

@property(nonatomic,strong) NSString *ledger_id; // ledger_id    string    账单ID
@property(nonatomic,strong) NSString *balance; // balance    string    余额
@property(nonatomic,strong) NSString *currency; // currency    string    币种
@property(nonatomic,strong) NSString *amount; // amount    string    变动数量
@property(nonatomic,strong) NSString *type; // type    string    流水来源
@property(nonatomic,strong) NSString *timestamp; // timestamp    string    账单创建时间
@property(nonatomic,strong) NSString *details; // details    string    如果type是trade或者fee，则会有该details字段将包含order,instrument信息
@property(nonatomic,strong) NSString *order_id; // order_id    string    交易的ID
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    交易的币对

@end