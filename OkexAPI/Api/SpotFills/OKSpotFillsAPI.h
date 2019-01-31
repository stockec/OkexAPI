//
//  OKSpotFillsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotFillsRO.h"
#import "OKSpotFillsPO.h"

@interface OKSpotFillsAPI : NSObject

@property(nonatomic,strong) OKSpotFillsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotFillsPO *po, NSError *error))completionHandler;

@end