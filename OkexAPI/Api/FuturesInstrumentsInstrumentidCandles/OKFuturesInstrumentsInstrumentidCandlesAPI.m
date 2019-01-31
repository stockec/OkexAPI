//
//  OKFuturesInstrumentsInstrumentidCandlesAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKFuturesInstrumentsInstrumentidCandlesAPI.h"
#import "OKNetworkManager.h"

@implementation OKFuturesInstrumentsInstrumentidCandlesAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKFuturesInstrumentsInstrumentidCandlesPO *)decodeParams:(NSDictionary *)response {
    OKFuturesInstrumentsInstrumentidCandlesPO *model = [OKFuturesInstrumentsInstrumentidCandlesPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrumentidCandlesPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/futures/v3/instruments/%@/candles", self.ro.instrumentid];
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