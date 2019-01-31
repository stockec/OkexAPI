//
//  OKSpotOrdersOrder_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotOrdersOrder_idRO.h"
#import "OKSpotOrdersOrder_idPO.h"

@interface OKSpotOrdersOrder_idAPI : NSObject

@property(nonatomic,strong) OKSpotOrdersOrder_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotOrdersOrder_idPO *po, NSError *error))completionHandler;

@end