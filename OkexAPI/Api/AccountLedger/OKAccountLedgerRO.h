//
//  OKAccountLedgerRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountLedgerRO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    否    币种，如btc ，不填时返回所有的账单流水
@property(nonatomic) NSInteger type; // type    number    否    填写相应数字：1:充值2:提现13:撤销提现18:转入合约账户19:合约账户转出20:转入子账户21:子账户转出28:领取29:转入指数交易区30:指数交易区转出 31:转入点对点账户32:点对点账户转出 33:转入币币杠杆账户 34:币币杠杆账户转出 37:转入币币账户 38:币币账户转出
@property(nonatomic) NSInteger from; // from    Number    否    请求此页码之后的分页内容（举例页码为：1，2，3，4，5。from 4 只返回第5页，to 4只返回第3页）
@property(nonatomic) NSInteger to; // to    Number    否    请求此页码之前的分页内容（举例页码为：1，2，3，4，5。from 4 只返回第5页，to 4只返回第3页）
@property(nonatomic) NSInteger limit; // limit    Number    否    分页返回的结果集数量，默认为100，最大为100，按时间顺序排列，越早下单的在前面

@end