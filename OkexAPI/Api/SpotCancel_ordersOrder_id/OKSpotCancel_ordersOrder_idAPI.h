//
//  OKSpotCancel_ordersOrder_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotCancel_ordersOrder_idRO.h"
#import "OKSpotCancel_ordersOrder_idPO.h"

@interface OKSpotCancel_ordersOrder_idAPI : NSObject

@property(nonatomic,strong) OKSpotCancel_ordersOrder_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotCancel_ordersOrder_idPO *po, NSError *error))completionHandler;

@end