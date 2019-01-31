//
//  OKMarginAccountsInstrument_idBorrowedAPI.m
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import "OKMarginAccountsInstrument_idBorrowedAPI.h"
#import "OKNetworkManager.h"

@implementation OKMarginAccountsInstrument_idBorrowedAPI

- (NSDictionary *)encodeParams {
    NSDictionary *params = [self.ro yy_modelToJSONObject];
    return params;
}

- (OKMarginAccountsInstrument_idBorrowedPO *)decodeParams:(NSDictionary *)response {
    OKMarginAccountsInstrument_idBorrowedPO *model = [OKMarginAccountsInstrument_idBorrowedPO yy_modelWithDictionary:response];
    return model;
}

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKMarginAccountsInstrument_idBorrowedPO *po, NSError *error))completionHandler; {
    NSDictionary *params = [self encodeParams];
    NSString *path = [NSString stringWithFormat:@"/api/margin/v3/accounts/%@/borrowed", self.ro.instrument_id];
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