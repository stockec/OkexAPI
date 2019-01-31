//
//  OKSpotCancel_ordersOrder_idAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSpotCancel_ordersOrder_idAPI.h"
#import "OKNetworkManager.h"

@implementation OKSpotCancel_ordersOrder_idAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKSpotCancel_ordersOrder_idPO *)decodeParams:(NSDictionary *)response {
    OKSpotCancel_ordersOrder_idPO *model = [OKSpotCancel_ordersOrder_idPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotCancel_ordersOrder_idPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/spot/v3/cancel_orders/%@", self.ro.order_id];
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