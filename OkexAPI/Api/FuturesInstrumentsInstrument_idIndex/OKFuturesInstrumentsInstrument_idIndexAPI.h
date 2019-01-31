//
//  OKFuturesInstrumentsInstrument_idIndexAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrument_idIndexRO.h"
#import "OKFuturesInstrumentsInstrument_idIndexPO.h"

@interface OKFuturesInstrumentsInstrument_idIndexAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrument_idIndexRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idIndexPO *po, NSError *error))completionHandler;

@end