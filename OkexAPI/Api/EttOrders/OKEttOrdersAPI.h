//
//  OKEttOrdersAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKEttOrdersRO.h"
#import "OKEttOrdersPO.h"

@interface OKEttOrdersAPI : NSObject

@property(nonatomic,strong) OKEttOrdersRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKEttOrdersPO *po, NSError *error))completionHandler;

@end