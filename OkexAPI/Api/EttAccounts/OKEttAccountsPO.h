//
//  OKEttAccountsPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKEttAccountsPO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    币种或ett名称
@property(nonatomic,strong) NSString *balance; // balance    余额
@property(nonatomic,strong) NSString *holds; // holds    冻结(不可用)
@property(nonatomic,strong) NSString *available; // available    可用于交易或资金划转的数量

@end