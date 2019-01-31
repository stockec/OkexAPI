//
//  OKSpotOrdersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotOrdersRO.h"
#import "OKSpotOrdersPO.h"

@interface OKSpotOrdersAPI : NSObject

@property(nonatomic,strong) OKSpotOrdersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotOrdersPO *po, NSError *error))completionHandler;

@end