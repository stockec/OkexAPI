//
//  OKSwapInstrumentsInstrument_idHistorical_funding_rateAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSwapInstrumentsInstrument_idHistorical_funding_rateAPI.h"
#import "OKNetworkManager.h"

@implementation OKSwapInstrumentsInstrument_idHistorical_funding_rateAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKSwapInstrumentsInstrument_idHistorical_funding_ratePO *)decodeParams:(NSDictionary *)response {
    OKSwapInstrumentsInstrument_idHistorical_funding_ratePO *model = [OKSwapInstrumentsInstrument_idHistorical_funding_ratePO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapInstrumentsInstrument_idHistorical_funding_ratePO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/swap/v3/instruments/%@/historical_funding_rate", self.ro.instrument_id];
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