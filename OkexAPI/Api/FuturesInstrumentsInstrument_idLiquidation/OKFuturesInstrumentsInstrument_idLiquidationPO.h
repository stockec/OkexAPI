//
//  OKFuturesInstrumentsInstrument_idLiquidationPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKFuturesInstrumentsInstrument_idLiquidationPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约ID，如BTC-USD-180213
@property(nonatomic) NSInteger size; // size    Number    数量
@property(nonatomic,strong) NSString *created_at; // created_at    Date    爆仓单的委托时间
@property(nonatomic) NSInteger loss; // loss    Number    穿仓用户亏损
@property(nonatomic,strong) NSString *price; // price    Price    订单价格
@property(nonatomic) NSInteger type; // type    Number    订单类型(3:平多 4:平空)

@end