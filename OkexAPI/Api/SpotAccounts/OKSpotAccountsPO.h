//
//  OKSpotAccountsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotAccountsPO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    string    币种
@property(nonatomic,strong) NSString *balance; // balance    string    余额
@property(nonatomic,strong) NSString *hold; // hold    string    冻结(不可用)
@property(nonatomic,strong) NSString *available; // available    string    可用于交易的数量
@property(nonatomic,strong) NSString *id; // id    string    账户ID

@end