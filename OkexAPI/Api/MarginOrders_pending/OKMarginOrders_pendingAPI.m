//
//  OKMarginOrders_pendingAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKMarginOrders_pendingAPI.h"
#import "OKNetworkManager.h"

@implementation OKMarginOrders_pendingAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKMarginOrders_pendingPO *)decodeParams:(NSDictionary *)response {
    OKMarginOrders_pendingPO *model = [OKMarginOrders_pendingPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginOrders_pendingPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams]; 
    NSString *path = @"/api/margin/v3/orders_pending"; 
    return [OKNetworkManager sendRequestWithPath:path 
                                          params:params 
                                      HTTPMethod:@"GET" 
                               completionHandler:^(NSDictionary *responseDic, NSError *error) { 
                                   if (error) { 
                                       if (completionHandler) { 
                                           completionHandler(nil, error); 
                                       } 
                                   } else { 
                                       if (completionHandler) { 
                                           completionHandler([self decodeParams:responseDic], nil); 
                                       } 
                                   } 
                               }]; 
}

@end