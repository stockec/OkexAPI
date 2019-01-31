//
//  OKSwapInstrumentsInstrument_idTickerPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idTickerPO : NSObject

@property(nonatomic,strong) NSString *last; // last    String    最新成交价
@property(nonatomic,strong) NSString *high_24h; // high_24h    String    24小时最高价
@property(nonatomic,strong) NSString *low_24h; // low_24h    String    24小时最低价
@property(nonatomic,strong) NSString *volume_24h; // volume_24h    String    24小时成交量
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end