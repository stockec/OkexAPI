//
//  OKFuturesAccountsCurrencyLeverageRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesAccountsCurrencyLeverageRO : NSObject

@property(nonatomic) NSInteger leverage; // leverage    Number    是    要设定的杠杆倍数，10或20
@property(nonatomic,strong) NSString *currency; // currency    String    是    币种，如：btc

@end