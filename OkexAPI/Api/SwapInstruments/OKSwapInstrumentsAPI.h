//
//  OKSwapInstrumentsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapInstrumentsRO.h"
#import "OKSwapInstrumentsPO.h"

@interface OKSwapInstrumentsAPI : NSObject

@property(nonatomic,strong) OKSwapInstrumentsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsPO *po, NSError *error))completionHandler;

@end