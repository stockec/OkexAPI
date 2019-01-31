//
//  OKAccountTransferRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountTransferRO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    是    币种
@property(nonatomic) NSInteger amount; // amount    number    是    划转数量
@property(nonatomic) NSInteger from; // from    number    是    转出账户(0:子账户 1:币币 3:合约 4:C2C 5:币币杠杆 6:钱包 7:ETT 8:余币宝 9 永续合约)
@property(nonatomic) NSInteger to; // to    number    是    转入账户(0:子账户 1:币币 3:合约 4:C2C 5:币币杠杆 6:钱包 7:ETT 8:余币宝 9 永续合约)
@property(nonatomic,strong) NSString *sub_account; // sub_account    String    否    子账号登录名，from或to指定为0时，sub_account为必填项
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    否    杠杆币对，如：eos-usdt，仅限已开通杠杆的币对

@end