//
//  OKAccountWithdrawalPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKAccountWithdrawalPO : NSObject

@property(nonatomic,strong) NSString *currency; // currency    String    提币币种
@property(nonatomic) NSInteger amount; // amount    number    提币数量
@property(nonatomic) NSInteger withdraw_id; // withdraw_id    number    提币申请ID
@property(nonatomic,strong) NSString *result; // result    boolean    提币申请结果。若是提现申请失败，将给出错误码提示

@end