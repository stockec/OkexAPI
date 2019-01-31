//
//  OKSwapRatePO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapRatePO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    USD_CNY
@property(nonatomic,strong) NSString *rate; // rate    String    汇率
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end