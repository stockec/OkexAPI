//
//  OKSwapInstrumentsInstrument_idTradesRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idTradesRO : NSObject

@property(nonatomic,strong) NSString *instrument_id; // instrument_id    String    是    合约名称，如BTC-USD-SWAP
@property(nonatomic,strong) NSString *from; // from    String    否    请求此页码的分页内容(举例页码：1，2，3，4，5。from 4只返回第4页，to 4只返回第3页)
@property(nonatomic,strong) NSString *to; // to    String    否    请求此页码之前的分页内容(举例页码：1，2，3，4，5。from 4只返回第4页，to 4只返回第3页)
@property(nonatomic,strong) NSString *limit; // limit    String    否    分页返回的结果集数量，默认为100，最大为100，按时间倒序排列，越晚成交的在前面

@end