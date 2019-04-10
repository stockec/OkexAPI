//
//  OKSpotOrdersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKPostSpotOrdersRO.h"
#import "OKPostSpotOrdersPO.h"

@interface OKPostSpotOrdersAPI : NSObject

@property(nonatomic,strong) OKPostSpotOrdersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKPostSpotOrdersPO *po, NSError *error))completionHandler;

@end
