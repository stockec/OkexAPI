//
//  OKAccountWithdrawalFeeRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountWithdrawalFeeRO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    否    币种，不填则返回所有

@end