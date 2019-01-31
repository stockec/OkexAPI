//
//  OKMarginOrdersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginOrdersRO.h"
#import "OKMarginOrdersPO.h"

@interface OKMarginOrdersAPI : NSObject

@property(nonatomic,strong) OKMarginOrdersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginOrdersPO *po, NSError *error))completionHandler;

@end