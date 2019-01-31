//
//  OKAccountDepositHistoryPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountDepositHistoryPO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    币种名称，如：btc
@property(nonatomic) NSInteger amount; // amount    number    充值数量
@property(nonatomic,strong) NSString *to; // to    String    此笔充值到账地址
@property(nonatomic,strong) NSString *txid; // txid    String    区块转账哈希记录
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    充值到账时间
@property(nonatomic) NSInteger status; // status    number    提现状态（0:等待确认;1:确认到账;2:充值成功；）

@end