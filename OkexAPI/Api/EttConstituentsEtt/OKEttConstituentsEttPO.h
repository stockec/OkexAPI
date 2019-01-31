//
//  OKEttConstituentsEttPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKEttConstituentsEttPO : NSObject

@property(nonatomic,strong) NSString *net_value; // net_value    ett美元净值
@property(nonatomic,strong) NSString *ett; // ett    ett名称
@property(nonatomic,strong) NSString *amount; // amount    每份ett包含币种成分数量
@property(nonatomic,strong) NSString *currency; // currency    ett包含币种成分

@end