//
//  OKFuturesInstrumentsInstrument_idMark_priceAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKFuturesInstrumentsInstrument_idMark_priceAPI.h"
#import "OKNetworkManager.h"

@implementation OKFuturesInstrumentsInstrument_idMark_priceAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKFuturesInstrumentsInstrument_idMark_pricePO *)decodeParams:(NSDictionary *)response {
    OKFuturesInstrumentsInstrument_idMark_pricePO *model = [OKFuturesInstrumentsInstrument_idMark_pricePO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesInstrumentsInstrument_idMark_pricePO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/futures/v3/instruments/%@/mark_price", self.ro.instrument_id];
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