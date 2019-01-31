//
//  OKFuturesCancel_orderInstrument_idOrder_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKFuturesCancel_orderInstrument_idOrder_idRO.h"
#import "OKFuturesCancel_orderInstrument_idOrder_idPO.h"

@interface OKFuturesCancel_orderInstrument_idOrder_idAPI : NSObject

@property(nonatomic,strong) OKFuturesCancel_orderInstrument_idOrder_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesCancel_orderInstrument_idOrder_idPO *po, NSError *error))completionHandler;

@end