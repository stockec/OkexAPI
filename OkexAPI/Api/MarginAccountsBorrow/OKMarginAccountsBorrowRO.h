//
//  OKMarginAccountsBorrowRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKMarginAccountsBorrowRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    是    杠杆币对名称
@property(nonatomic,strong) NSString *currency; // currency    string    是    币种
@property(nonatomic,strong) NSString *amount; // amount    string    是    借币数量

@end