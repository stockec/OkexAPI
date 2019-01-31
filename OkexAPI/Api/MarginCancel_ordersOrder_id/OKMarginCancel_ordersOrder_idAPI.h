//
//  OKMarginCancel_ordersOrder_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginCancel_ordersOrder_idRO.h"
#import "OKMarginCancel_ordersOrder_idPO.h"

@interface OKMarginCancel_ordersOrder_idAPI : NSObject

@property(nonatomic,strong) OKMarginCancel_ordersOrder_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginCancel_ordersOrder_idPO *po, NSError *error))completionHandler;

@end