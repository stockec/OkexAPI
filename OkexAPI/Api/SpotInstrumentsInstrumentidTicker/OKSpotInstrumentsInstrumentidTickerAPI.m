//
//  OKSpotInstrumentsInstrumentidTickerAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSpotInstrumentsInstrumentidTickerAPI.h"
#import "OKNetworkManager.h"

@implementation OKSpotInstrumentsInstrumentidTickerAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKSpotInstrumentsInstrumentidTickerPO *)decodeParams:(NSDictionary *)response {
    OKSpotInstrumentsInstrumentidTickerPO *model = [OKSpotInstrumentsInstrumentidTickerPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotInstrumentsInstrumentidTickerPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/spot/v3/instruments/%@/ticker", self.ro.instrumentid];
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