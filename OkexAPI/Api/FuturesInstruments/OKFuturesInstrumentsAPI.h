//
//  OKFuturesInstrumentsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsRO.h"
#import "OKFuturesInstrumentsPO.h"

@interface OKFuturesInstrumentsAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsPO *po, NSError *error))completionHandler;

@end