//
//  OKAccountWithdrawalFeeAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKAccountWithdrawalFeeAPI.h"
#import "OKNetworkManager.h"

@implementation OKAccountWithdrawalFeeAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKAccountWithdrawalFeePO *)decodeParams:(NSDictionary *)response {
    OKAccountWithdrawalFeePO *model = [OKAccountWithdrawalFeePO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountWithdrawalFeePO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams]; 
    NSString *path = @"/api/account/v3/withdrawal/fee"; 
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