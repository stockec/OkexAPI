//
//  OKAccountLedgerPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountLedgerPO : NSObject

@property(nonatomic) NSInteger ledger_id; // ledger_id    number    账单ID
@property(nonatomic,strong) NSString *currency; // currency    String    币种
@property(nonatomic) NSInteger balance; // balance    number    余额
@property(nonatomic) NSInteger amount; // amount    number    变动数量
@property(nonatomic,strong) NSString *typename; // typename    String    账单类型
@property(nonatomic) NSInteger fee; // fee    number    手续费
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    账单创建时间

@end