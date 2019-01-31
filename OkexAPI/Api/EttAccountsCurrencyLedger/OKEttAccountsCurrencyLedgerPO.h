//
//  OKEttAccountsCurrencyLedgerPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKEttAccountsCurrencyLedgerPO : NSObject

@property(nonatomic,strong) NSString *ledger_id; // ledger_id    账单ID
@property(nonatomic,strong) NSString *currency; // currency    币种或ett名称
@property(nonatomic,strong) NSString *balance; // balance    余额
@property(nonatomic,strong) NSString *amount; // amount    变动数量
@property(nonatomic,strong) NSString *type; // type    流水来源
@property(nonatomic,strong) NSString *created_at; // created_at    账单创建时间
@property(nonatomic,strong) NSString *details; // details    如果类型是交易产生的，则该details字段将包含该交易的关联信息

@end