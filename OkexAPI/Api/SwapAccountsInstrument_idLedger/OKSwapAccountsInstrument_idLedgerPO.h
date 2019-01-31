//
//  OKSwapAccountsInstrument_idLedgerPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapAccountsInstrument_idLedgerPO : NSObject

@property(nonatomic,strong) NSString *ledger_id; // ledger_id    String    账单id
@property(nonatomic,strong) NSString *amount; // amount    String    变动金额
@property(nonatomic,strong) NSString *type; // type    String    账单类型
@property(nonatomic,strong) NSString *fee; // fee    String    手续费
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    账单创建时间
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称

@end