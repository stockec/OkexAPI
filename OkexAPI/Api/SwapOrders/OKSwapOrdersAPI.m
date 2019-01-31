//
//  OKSwapOrdersAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSwapOrdersAPI.h"
#import "OKNetworkManager.h"

@implementation OKSwapOrdersAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKSwapOrdersPO *)decodeParams:(NSDictionary *)response {
    OKSwapOrdersPO *model = [OKSwapOrdersPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapOrdersPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams]; 
    NSString *path = @"/api/swap/v3/orders"; 
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