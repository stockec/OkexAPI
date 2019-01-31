//
//  OKMarginAccountsInstrument_idBorrowedPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKMarginAccountsInstrument_idBorrowedPO : NSObject

@property(nonatomic,strong) NSString *borrow_id; // borrow_id    long    借币记录ID
@property(nonatomic,strong) NSString *currency; // currency    string    币种
@property(nonatomic,strong) NSString *created_at; // created_at    string    借币时间
@property(nonatomic,strong) NSString *amount; // amount    string    借币总数量
@property(nonatomic,strong) NSString *interest; // interest    string    利息总数量
@property(nonatomic,strong) NSString *returned_amount; // returned_amount    string    已还借币数量
@property(nonatomic,strong) NSString *paid_interest; // paid_interest    string    已还利息数量
@property(nonatomic,strong) NSString *last_interest_time; // last_interest_time    string    最后一次计息时间
@property(nonatomic,strong) NSString *force_repay_time; // force_repay_time    string    强制还息时间
@property(nonatomic,strong) NSString *rate; // rate    string    利率

@end