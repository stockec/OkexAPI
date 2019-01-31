//
//  OKAccountWalletCurrencyPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountWalletCurrencyPO : NSObject

@property(nonatomic) NSInteger balance; // balance    number    余额
@property(nonatomic) NSInteger hold; // hold    number    冻结(不可用)
@property(nonatomic) NSInteger available; // available    number    可用余额
@property(nonatomic,strong) NSString *currency; // currency    String    币种，如btc

@end