//
//  OKAccountDepositAddressPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountDepositAddressPO : NSObject

@property(nonatomic,strong) NSString *address; // address    String    充值地址
@property(nonatomic,strong) NSString *tag; // tag    String    部分币种提币需要标签，若不需要则不返回此字段
@property(nonatomic,strong) NSString *payment_id; // payment_id    String    部分币种提币需要此字段，若不需要则不返回此字段
@property(nonatomic,strong) NSString *currency; // currency    String    币种，如btc

@end