//
//  OKMarginAccountsBorrowedAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginAccountsBorrowedRO.h"
#import "OKMarginAccountsBorrowedPO.h"

@interface OKMarginAccountsBorrowedAPI : NSObject

@property(nonatomic,strong) OKMarginAccountsBorrowedRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsBorrowedPO *po, NSError *error))completionHandler;

@end