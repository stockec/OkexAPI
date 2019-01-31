//
//  OKMarginOrdersOrder_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKMarginOrdersOrder_idRO.h"
#import "OKMarginOrdersOrder_idPO.h"

@interface OKMarginOrdersOrder_idAPI : NSObject

@property(nonatomic,strong) OKMarginOrdersOrder_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginOrdersOrder_idPO *po, NSError *error))completionHandler;

@end