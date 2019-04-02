//
//  OKSwapInstrumentsInstrument_idCandlesPO.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSwapInstrumentsInstrument_idCandlesPO.h"

@implementation OKSwapInstrumentsInstrument_idCandlesPO

- (double)maxPoint {
    return MAX(self.close.doubleValue, self.open.doubleValue);
}

- (double)minPoint {
    return MIN(self.close.doubleValue, self.open.doubleValue);
}

- (double)percent {
    return ((self.close.doubleValue - self.open.doubleValue) / self.open.doubleValue) * 100.0;
}

@end
