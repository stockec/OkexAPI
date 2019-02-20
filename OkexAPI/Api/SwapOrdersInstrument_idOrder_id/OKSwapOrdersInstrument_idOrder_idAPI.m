//
//  OKSwapOrdersInstrument_idOrder_idAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKSwapOrdersInstrument_idOrder_idAPI.h"
#import "OKNetworkManager.h"

@implementation OKSwapOrdersInstrument_idOrder_idAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKSwapOrdersInstrument_idOrder_idPO *)decodeParams:(NSDictionary *)response {
    OKSwapOrdersInstrument_idOrder_idPO *model = [OKSwapOrdersInstrument_idOrder_idPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapOrdersInstrument_idOrder_idPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/swap/v3/orders/%@/%@", self.ro.instrument_id, self.ro.order_id];
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
                                           NSString *code = [responseDic objectForKey:@"code"];
                                           NSString *message = [responseDic objectForKey:@"message"];
                                           if (code && message) {
                                               NSError *error = [NSError errorWithDomain:@"OkexServerDomin" code:code.integerValue userInfo:@{NSLocalizedDescriptionKey: message}];
                                               completionHandler(nil, error);
                                               return ;
                                           }
                                           completionHandler([self decodeParams:responseDic], nil); 
                                       } 
                                   } 
                               }]; 
}

@end
