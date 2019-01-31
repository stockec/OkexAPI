//
//  OKMarginBatch_ordersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginBatch_ordersRO.h"
#import "OKMarginBatch_ordersPO.h"

@interface OKMarginBatch_ordersAPI : NSObject

@property(nonatomic,strong) OKMarginBatch_ordersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginBatch_ordersPO *po, NSError *error))completionHandler;

@end