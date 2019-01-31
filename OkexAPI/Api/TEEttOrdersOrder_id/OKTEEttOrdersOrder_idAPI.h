//
//  OKTEEttOrdersOrder_idAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKTEEttOrdersOrder_idRO.h"
#import "OKTEEttOrdersOrder_idPO.h"

@interface OKTEEttOrdersOrder_idAPI : NSObject

@property(nonatomic,strong) OKTEEttOrdersOrder_idRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKTEEttOrdersOrder_idPO *po, NSError *error))completionHandler;

@end