//
//  OKAccountWithdrawalRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountWithdrawalRO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    是    币种
@property(nonatomic) NSInteger amount; // amount    number    是    数量
@property(nonatomic) NSInteger destination; // destination    number    是    提币到(2:OKCoin国际 3:OKEx 4:数字货币地址)
@property(nonatomic,strong) NSString *to_address; // to_address    String    是    认证过的数字货币地址、邮箱或手机号。某些数字货币地址格式为:地址+标签，例："ARDOR-7JF3-8F2E-QUWZ-CAN7F：123456"
@property(nonatomic,strong) NSString *trade_pwd; // trade_pwd    String    是    交易密码
@property(nonatomic) NSInteger fee; // fee    number    是    网络手续费≥0.提币到OKCoin国际或OKEx免手续费，请设置为0.提币到数字货币地址所需网络手续费可通过提币手续费接口查询

@end