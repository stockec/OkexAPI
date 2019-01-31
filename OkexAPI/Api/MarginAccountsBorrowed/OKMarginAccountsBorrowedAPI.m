//
//  OKMarginAccountsBorrowedAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKMarginAccountsBorrowedAPI.h"
#import "OKNetworkManager.h"

@implementation OKMarginAccountsBorrowedAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKMarginAccountsBorrowedPO *)decodeParams:(NSDictionary *)response {
    OKMarginAccountsBorrowedPO *model = [OKMarginAccountsBorrowedPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsBorrowedPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams]; 
    NSString *path = @"/api/margin/v3/accounts/borrowed"; 
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