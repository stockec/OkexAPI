//
//  OKMarginAccountsInstrument_idAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKMarginAccountsInstrument_idAPI.h"
#import "OKNetworkManager.h"

@implementation OKMarginAccountsInstrument_idAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKMarginAccountsInstrument_idPO *)decodeParams:(NSDictionary *)response {
    OKMarginAccountsInstrument_idPO *model = [OKMarginAccountsInstrument_idPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsInstrument_idPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/margin/v3/accounts/%@", self.ro.instrument_id];
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