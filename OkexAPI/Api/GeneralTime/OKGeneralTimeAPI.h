//
//  OKGeneralTimeAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKGeneralTimeRO.h"
#import "OKGeneralTimePO.h"

@interface OKGeneralTimeAPI : NSObject

@property(nonatomic,strong) OKGeneralTimeRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKGeneralTimePO *po, NSError *error))completionHandler;

@end