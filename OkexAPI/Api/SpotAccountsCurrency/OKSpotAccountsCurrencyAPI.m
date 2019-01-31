//
//  OKSpotAccountsCurrencyAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSpotAccountsCurrencyAPI.h"
#import "OKNetworkManager.h"

@implementation OKSpotAccountsCurrencyAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKSpotAccountsCurrencyPO *)decodeParams:(NSDictionary *)response {
    OKSpotAccountsCurrencyPO *model = [OKSpotAccountsCurrencyPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotAccountsCurrencyPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/spot/v3/accounts/%@", self.ro.currency];
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