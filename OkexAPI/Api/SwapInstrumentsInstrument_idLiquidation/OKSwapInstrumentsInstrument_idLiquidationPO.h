//
//  OKSwapInstrumentsInstrument_idLiquidationPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idLiquidationPO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *size; // size    String    数量
@property(nonatomic,strong) NSString *created_at; // created_at    String    委托时间
@property(nonatomic,strong) NSString *loss; // loss    String    穿仓用户亏损
@property(nonatomic,strong) NSString *price; // price    String    委托价格
@property(nonatomic,strong) NSString *type; // type    String    3:平多 4:平空

@end