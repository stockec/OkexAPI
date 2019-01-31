//
//  OKMarginCancel_batch_ordersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginCancel_batch_ordersRO.h"
#import "OKMarginCancel_batch_ordersPO.h"

@interface OKMarginCancel_batch_ordersAPI : NSObject

@property(nonatomic,strong) OKMarginCancel_batch_ordersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginCancel_batch_ordersPO *po, NSError *error))completionHandler;

@end