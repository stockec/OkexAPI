//
//  OKSwapInstrumentsInstrument_idTradesAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSwapInstrumentsInstrument_idTradesAPI.h"
#import "OKNetworkManager.h"

@implementation OKSwapInstrumentsInstrument_idTradesAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (NSArray *)decodeParams:(NSDictionary *)response {
    NSArray *model = [NSArray yy_modelArrayWithClass:[OKSwapInstrumentsInstrument_idTradesPO class] json:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(NSArray<OKSwapInstrumentsInstrument_idTradesPO *> *pos, NSError *error))completionHandler {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/swap/v3/instruments/%@/trades", self.ro.instrument_id];
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
