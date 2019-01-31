//
//  OKMarginCancel_ordersOrder_idAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKMarginCancel_ordersOrder_idAPI.h"
#import "OKNetworkManager.h"

@implementation OKMarginCancel_ordersOrder_idAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKMarginCancel_ordersOrder_idPO *)decodeParams:(NSDictionary *)response {
    OKMarginCancel_ordersOrder_idPO *model = [OKMarginCancel_ordersOrder_idPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginCancel_ordersOrder_idPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/margin/v3/cancel_orders/%@", self.ro.order_id];
    return [OKNetworkManager sendRequestWithPath:path
                                          params:params 
                                      HTTPMethod:@"POST" 
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