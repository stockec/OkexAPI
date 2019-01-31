//
//  OKFuturesOrdersInstrument_idAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKFuturesOrdersInstrument_idAPI.h"
#import "OKNetworkManager.h"

@implementation OKFuturesOrdersInstrument_idAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKFuturesOrdersInstrument_idPO *)decodeParams:(NSDictionary *)response {
    OKFuturesOrdersInstrument_idPO *model = [OKFuturesOrdersInstrument_idPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesOrdersInstrument_idPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/futures/v3/orders/%@", self.ro.instrument_id];
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