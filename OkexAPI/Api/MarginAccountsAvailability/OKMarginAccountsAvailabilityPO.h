//
//  OKMarginAccountsAvailabilityPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKMarginAccountsAvailabilityPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    杠杆币对名称
@property(nonatomic,strong) NSString *currency; // currency    string    币种
@property(nonatomic,strong) NSString *available; // available    string    当前最大可借
@property(nonatomic,strong) NSString *rate; // rate    string    借币利率
@property(nonatomic,strong) NSString *leverage; // leverage    string    最大杠杆倍数

@end