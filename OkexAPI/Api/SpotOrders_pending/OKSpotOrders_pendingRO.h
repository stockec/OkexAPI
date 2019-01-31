//
//  OKSpotOrders_pendingRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotOrders_pendingRO : NSObject

@property(nonatomic,strong) NSString *from; // from    string    [非必填] 请求此id之后(更新的数据)的分页内容（举例一列数：1，2，3，4，5。from 4 只有5，to 4有1，2，3）
@property(nonatomic,strong) NSString *to; // to    string    [非必填] 请求此id之前(更旧的数据)的分页内容
@property(nonatomic,strong) NSString *limit; // limit    string    [非必填] 分页返回的结果集数量，默认为100，最大为100(具体参见分页处的描述)
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    [非必填]币对名称 不填时返回所有未成交订单

@end