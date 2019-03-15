//
//  OKSwapOrdersInstrument_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapOrdersInstrument_idRO.h"
#import "OKSwapOrdersInstrument_idPO.h"

@interface OKSwapOrdersInstrument_idAPI : NSObject

@property(nonatomic,strong) OKSwapOrdersInstrument_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(NSArray *pos, NSError *error))completionHandler;

@end
