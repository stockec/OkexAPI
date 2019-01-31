//
//  OKFuturesInstrumentsInstrument_idTradesAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKFuturesInstrumentsInstrument_idTradesAPI.h"
#import "OKNetworkManager.h"

@implementation OKFuturesInstrumentsInstrument_idTradesAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKFuturesInstrumentsInstrument_idTradesPO *)decodeParams:(NSDictionary *)response {
    OKFuturesInstrumentsInstrument_idTradesPO *model = [OKFuturesInstrumentsInstrument_idTradesPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idTradesPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/futures/v3/instruments/%@/trades", self.ro.instrument_id];
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