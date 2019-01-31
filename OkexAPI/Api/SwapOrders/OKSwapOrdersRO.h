//
//  OKSwapOrdersRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapOrdersRO : NSObject

@property(nonatomic,strong) NSString *order_data; // order_data    List    是    JSON类型的字符串 例：[{"client_oid": "E213","price": "5","size": "2","type": "1","match_price": "0"},{"client_oid": "243","price": "2","size": "3","type": "2","match_price": "1"}] 最大下单量为20
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约名称，如BTC-USD-SWAP

@end