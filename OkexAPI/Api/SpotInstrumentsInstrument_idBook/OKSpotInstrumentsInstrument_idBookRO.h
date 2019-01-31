//
//  OKSpotInstrumentsInstrument_idBookRO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKSpotInstrumentsInstrument_idBookRO : NSObject

@property(nonatomic,strong) NSString *size; // size    string    [非必填]返回深度档位数量，最多返回200
@property(nonatomic,strong) NSString *depth; // depth    string    [非必填]按价格合并深度，例如：0.1,0.001
@property(nonatomic,strong) NSString *instrument_id; // instrument_id    string    [必填]币对

@end