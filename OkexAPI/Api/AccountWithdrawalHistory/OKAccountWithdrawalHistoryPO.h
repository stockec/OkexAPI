//
//  OKAccountWithdrawalHistoryPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountWithdrawalHistoryPO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    币种
@property(nonatomic) NSInteger amount; // amount    number    数量
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    提币申请时间
@property(nonatomic,strong) NSString *from; // from    String    提币地址(如果收币地址是OKEx平台地址，则此处将显示用户账户)
@property(nonatomic,strong) NSString *to; // to    String    收币地址
@property(nonatomic,strong) NSString *tag; // tag    String    部分币种提币需要标签，若不需要则不返回此字段
@property(nonatomic,strong) NSString *payment_id; // payment_id    String    部分币种提币需要此字段，若不需要则不返回此字段
@property(nonatomic,strong) NSString *txid; // txid    String    提币哈希记录(内部转账将不返回此字段)
@property(nonatomic,strong) NSString *fee; // fee    String    提币手续费
@property(nonatomic) NSInteger status; // status    number    提现状态（-3:撤销中;-2:已撤销;-1:失败;0:等待提现;1:提现中;2:已汇出;3:邮箱确认;4:人工审核中5:等待身份认证）

@end