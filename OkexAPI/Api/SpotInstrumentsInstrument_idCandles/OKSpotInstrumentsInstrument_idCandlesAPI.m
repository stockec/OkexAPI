//
//  OKSpotInstrumentsInstrument_idCandlesAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSpotInstrumentsInstrument_idCandlesAPI.h"
#import "OKNetworkManager.h"
#import "NSArray+Index.h"

@implementation OKSpotInstrumentsInstrument_idCandlesAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (NSArray *)decodeParams:(NSDictionary *)response {
    if ([response isKindOfClass:[NSArray class]]) {
        NSMutableArray *models = [NSMutableArray array];
        for (NSArray *arr in response) {
            if (arr.count == 0) {
                continue;
            }
            OKSpotInstrumentsInstrument_idCandlesPO *model = [OKSpotInstrumentsInstrument_idCandlesPO new];
            NSString *first = [arr firstObject];
            model.time = first;
            model.open = [arr objAtIndex:1];
            model.high = [arr objAtIndex:2];
            model.low = [arr objAtIndex:3];
            model.close = [arr objAtIndex:4];
            model.volume = [arr objAtIndex:5];
            [models addObject:model];
        }
        return models;
    }
    return nil;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(NSArray<OKSpotInstrumentsInstrument_idCandlesPO *> *pos, NSError *error))completionHandler {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/spot/v3/instruments/%@/candles", self.ro.instrument_id];
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
