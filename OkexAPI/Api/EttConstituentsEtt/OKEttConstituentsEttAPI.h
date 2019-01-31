//
//  OKEttConstituentsEttAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKEttConstituentsEttRO.h"
#import "OKEttConstituentsEttPO.h"

@interface OKEttConstituentsEttAPI : NSObject

@property(nonatomic,strong) OKEttConstituentsEttRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKEttConstituentsEttPO *po, NSError *error))completionHandler;

@end