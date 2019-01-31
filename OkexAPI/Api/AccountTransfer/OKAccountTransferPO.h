//
//  OKAccountTransferPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountTransferPO : NSObject

@property(nonatomic) NSInteger transfer_id; // transfer_id    number    划转ID
@property(nonatomic,strong) NSString *currency; // currency    String    划转币种
@property(nonatomic) NSInteger from; // from    number    转出账户
@property(nonatomic) NSInteger amount; // amount    number    划转量
@property(nonatomic) NSInteger to; // to    number    转入账户
@property(nonatomic,strong) NSString *result; // result    boolean    划转结果。若是划转失败，将给出错误码提示

@end