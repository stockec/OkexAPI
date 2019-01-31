//
//  OKAccountWithdrawalFeePO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountWithdrawalFeePO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    币种
@property(nonatomic) NSInteger min_fee; // min_fee    number    最小提币手续费数量
@property(nonatomic) NSInteger max_fee; // max_fee    number    最大提币手续费数量

@end