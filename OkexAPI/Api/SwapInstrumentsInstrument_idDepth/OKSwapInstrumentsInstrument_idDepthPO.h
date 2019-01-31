//
//  OKSwapInstrumentsInstrument_idDepthPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSwapInstrumentsInstrument_idDepthPO : NSObject

@property(nonatomic,strong) NSString *asks; // asks    String    卖方深度
@property(nonatomic,strong) NSString *bids; // bids    String    买方深度
@property(nonatomic,strong) NSString *timestamp; // timestamp    String    系统时间戳

@end