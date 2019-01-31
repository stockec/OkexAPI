//
//  OKAccountTransferAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountTransferRO.h"
#import "OKAccountTransferPO.h"

@interface OKAccountTransferAPI : NSObject

@property(nonatomic,strong) OKAccountTransferRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountTransferPO *po, NSError *error))completionHandler;

@end