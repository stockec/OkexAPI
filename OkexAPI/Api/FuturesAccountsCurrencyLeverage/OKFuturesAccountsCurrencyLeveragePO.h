//
//  OKFuturesAccountsCurrencyLeveragePO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesAccountsCurrencyLeveragePO : NSObject

@property(nonatomic,strong) NSString *margin_mode; // margin_mode    String    账户类型：全仓 crossed
@property(nonatomic,strong) NSString *currency; // currency    String    币种，如：btc
@property(nonatomic) NSInteger leverage; // leverage    Number    已设定的杠杆倍数，10或20
@property(nonatomic,strong) NSString *result; // result    String    返回设定结果，成功或错误码

@end