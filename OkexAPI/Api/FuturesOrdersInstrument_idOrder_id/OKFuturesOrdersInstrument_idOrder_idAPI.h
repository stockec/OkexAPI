//
//  OKFuturesOrdersInstrument_idOrder_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesOrdersInstrument_idOrder_idRO.h"
#import "OKFuturesOrdersInstrument_idOrder_idPO.h"

@interface OKFuturesOrdersInstrument_idOrder_idAPI : NSObject

@property(nonatomic,strong) OKFuturesOrdersInstrument_idOrder_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesOrdersInstrument_idOrder_idPO *po, NSError *error))completionHandler;

@end