//
//  OKEttAccountsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKEttAccountsRO.h"
#import "OKEttAccountsPO.h"

@interface OKEttAccountsAPI : NSObject

@property(nonatomic,strong) OKEttAccountsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKEttAccountsPO *po, NSError *error))completionHandler;

@end