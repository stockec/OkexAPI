//
//  OKSpotBatch_ordersAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSpotBatch_ordersAPI.h"
#import "OKNetworkManager.h"

@implementation OKSpotBatch_ordersAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKSpotBatch_ordersPO *)decodeParams:(NSDictionary *)response {
    OKSpotBatch_ordersPO *model = [OKSpotBatch_ordersPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotBatch_ordersPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams]; 
    NSString *path = @"/api/spot/v3/batch_orders"; 
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