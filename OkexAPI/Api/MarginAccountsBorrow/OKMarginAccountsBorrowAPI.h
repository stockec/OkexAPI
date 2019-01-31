//
//  OKMarginAccountsBorrowAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginAccountsBorrowRO.h"
#import "OKMarginAccountsBorrowPO.h"

@interface OKMarginAccountsBorrowAPI : NSObject

@property(nonatomic,strong) OKMarginAccountsBorrowRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsBorrowPO *po, NSError *error))completionHandler;

@end