//
//  OKFuturesCancel_orderInstrument_idOrder_idAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKFuturesCancel_orderInstrument_idOrder_idAPI.h"
#import "OKNetworkManager.h"

@implementation OKFuturesCancel_orderInstrument_idOrder_idAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKFuturesCancel_orderInstrument_idOrder_idPO *)decodeParams:(NSDictionary *)response {
    OKFuturesCancel_orderInstrument_idOrder_idPO *model = [OKFuturesCancel_orderInstrument_idOrder_idPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKFuturesCancel_orderInstrument_idOrder_idPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/futures/v3/cancel_order/<instrument_id>/%@", self.ro.order_id];
    return [OKNetworkManager sendRequestWithPath:path
                                          params:params 
                                      HTTPMethod:@"POST" 
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