//
//  OKSwapOrdersInstrument_idOrder_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapOrdersInstrument_idOrder_idRO.h"
#import "OKSwapOrdersInstrument_idOrder_idPO.h"

@interface OKSwapOrdersInstrument_idOrder_idAPI : NSObject

@property(nonatomic,strong) OKSwapOrdersInstrument_idOrder_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapOrdersInstrument_idOrder_idPO *po, NSError *error))completionHandler;

@end