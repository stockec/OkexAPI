//
//  OKMarginFillsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginFillsRO.h"
#import "OKMarginFillsPO.h"

@interface OKMarginFillsAPI : NSObject

@property(nonatomic,strong) OKMarginFillsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginFillsPO *po, NSError *error))completionHandler;

@end