//
//  OKAccountWithdrawalHistoryCurrencyAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKAccountWithdrawalHistoryCurrencyAPI.h"
#import "OKNetworkManager.h"

@implementation OKAccountWithdrawalHistoryCurrencyAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKAccountWithdrawalHistoryCurrencyPO *)decodeParams:(NSDictionary *)response {
    OKAccountWithdrawalHistoryCurrencyPO *model = [OKAccountWithdrawalHistoryCurrencyPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountWithdrawalHistoryCurrencyPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/account/v3/withdrawal/history/%@", self.ro.currency];
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