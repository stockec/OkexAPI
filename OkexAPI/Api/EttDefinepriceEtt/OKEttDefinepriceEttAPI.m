//
//  OKEttDefinepriceEttAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKEttDefinepriceEttAPI.h"
#import "OKNetworkManager.h"

@implementation OKEttDefinepriceEttAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKEttDefinepriceEttPO *)decodeParams:(NSDictionary *)response {
    OKEttDefinepriceEttPO *model = [OKEttDefinepriceEttPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKEttDefinepriceEttPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/ett/v3/defineprice/%@", self.ro.ett];
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