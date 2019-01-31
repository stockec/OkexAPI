//
//  OKFuturesInstrumentsInstrument_idBookAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesInstrumentsInstrument_idBookRO.h"
#import "OKFuturesInstrumentsInstrument_idBookPO.h"

@interface OKFuturesInstrumentsInstrument_idBookAPI : NSObject

@property(nonatomic,strong) OKFuturesInstrumentsInstrument_idBookRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idBookPO *po, NSError *error))completionHandler;

@end