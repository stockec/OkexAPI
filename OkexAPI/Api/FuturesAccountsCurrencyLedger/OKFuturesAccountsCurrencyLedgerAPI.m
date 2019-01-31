//
//  OKFuturesAccountsCurrencyLedgerAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKFuturesAccountsCurrencyLedgerAPI.h"
#import "OKNetworkManager.h"

@implementation OKFuturesAccountsCurrencyLedgerAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKFuturesAccountsCurrencyLedgerPO *)decodeParams:(NSDictionary *)response {
    OKFuturesAccountsCurrencyLedgerPO *model = [OKFuturesAccountsCurrencyLedgerPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesAccountsCurrencyLedgerPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/futures/v3/accounts/%@/ledger", self.ro.currency];
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