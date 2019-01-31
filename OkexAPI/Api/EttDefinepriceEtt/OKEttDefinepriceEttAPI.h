//
//  OKEttDefinepriceEttAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKEttDefinepriceEttRO.h"
#import "OKEttDefinepriceEttPO.h"

@interface OKEttDefinepriceEttAPI : NSObject

@property(nonatomic,strong) OKEttDefinepriceEttRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKEttDefinepriceEttPO *po, NSError *error))completionHandler;

@end