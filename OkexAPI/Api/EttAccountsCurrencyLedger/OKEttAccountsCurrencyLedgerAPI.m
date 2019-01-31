//
//  OKEttAccountsCurrencyLedgerAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKEttAccountsCurrencyLedgerAPI.h"
#import "OKNetworkManager.h"

@implementation OKEttAccountsCurrencyLedgerAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKEttAccountsCurrencyLedgerPO *)decodeParams:(NSDictionary *)response {
    OKEttAccountsCurrencyLedgerPO *model = [OKEttAccountsCurrencyLedgerPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKEttAccountsCurrencyLedgerPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/ett/v3/accounts/%@/ledger", self.ro.currency];
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