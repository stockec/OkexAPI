//
//  OKSwapInstrumentsInstrument_idIndexAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsInstrument_idIndexRO.h"
#import "OKSwapInstrumentsInstrument_idIndexPO.h"

@interface OKSwapInstrumentsInstrument_idIndexAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsInstrument_idIndexRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idIndexPO *po, NSError *error))completionHandler;

@end