//
//  OKNetworkManager.m
//  VirtualCurrency
//
//  Created by zhtg on 2019/1/23.
//  Copyright © 2019 egst. All rights reserved.
//

#import "OKNetworkManager.h"
#import <ZTNetworkSDK/ZTNetworkSDK.h>
#import "NSString+SHA256.h"
#import "NSDate+String.h"

NSString *__OKEX_API_Key = nil;
NSString *__OKEX_Secret_Key = nil;
NSString *__OKEX_Passphrase = nil;
BOOL __OKEX_Show_Log = YES;

static NSString *const VCNetworkBaseURL =  @"https://www.okex.com";

@implementation OKNetworkManager

+ (void)setAPIKey:(NSString *)apiKey {
    __OKEX_API_Key = apiKey;
}
+ (void)setSecretKey:(NSString *)secretKey {
    __OKEX_Secret_Key = secretKey;
}
+ (void)setPassphrase:(NSString *)passphrase {
    __OKEX_Passphrase = passphrase;
}
+ (void)setShowLog:(BOOL)showLog {
    __OKEX_Show_Log = showLog;
}

NSString * GetSign(NSString * timestamp, NSString * method, NSString * requestPath, NSString * body) {
    NSString *data = [NSString stringWithFormat:@"%@%@%@", timestamp, method, requestPath];
    if (body.length) {
        data = [data stringByAppendingString:body];
    }
    NSString *key = __OKEX_Secret_Key;
    NSString *base64String = [data hmacBase64StringWithKey:key];
    return base64String;
}

+ (NSURLSessionTask *)sendRequestWithPath:(NSString *)path
                                   params:(NSDictionary *)params
                               HTTPMethod:(NSString *)HTTPMethod
                        completionHandler:(void (^)(NSDictionary *responseDic, NSError *error))completionHandler {
    if ([HTTPMethod isEqualToString:@"GET"]) {
        if (params.count > 0) {
            NSMutableArray *array = [NSMutableArray array];
            for (NSString *key in params.allKeys) {
                NSString *string = [NSString stringWithFormat:@"%@=%@", key, [params objectForKey:key]];
                [array addObject:string];
            }
            NSString *query = [array componentsJoinedByString:@"&"];
            if ([path containsString:@"?"]) {
                path = [path stringByAppendingFormat:@"&%@", query];
            } else {
                path = [path stringByAppendingFormat:@"?%@", query];
            }
        }
        params = nil;
    }
    
    NSString *fullURL = nil;
    if ([path hasPrefix:@"/"]) {
        fullURL = [NSString stringWithFormat:@"%@%@", VCNetworkBaseURL, path];
    } else {
        fullURL = [NSString stringWithFormat:@"%@/%@", VCNetworkBaseURL, path];
    }
    
    NSString *timestamp = [self nowDateString];
    
    // headers
    NSMutableDictionary *headerFields = [NSMutableDictionary dictionary];
    [headerFields setObject:__OKEX_API_Key forKey:@"OK-ACCESS-KEY"];
    [headerFields setObject:timestamp forKey:@"OK-ACCESS-TIMESTAMP"];
    [headerFields setObject:__OKEX_Passphrase forKey:@"OK-ACCESS-PASSPHRASE"];
    [headerFields setObject:@"application/json; charset=UTF-8" forKey:@"Content-Type"];
    [headerFields setObject:@"application/json" forKey:@"Accept"];
    
    NSString *bodyString = @"";
    if (params) {
        NSData *paramsData = [NSJSONSerialization dataWithJSONObject:params options:0 error:nil];
        bodyString = [[NSString alloc] initWithData:paramsData encoding:NSUTF8StringEncoding];
    }
    NSString *sign = GetSign(timestamp, HTTPMethod, path, bodyString);
    [headerFields setObject:sign forKey:@"OK-ACCESS-SIGN"];
    NSURLSessionTask *task = [[NWSession sharedSession] sendRequestWithURLString:fullURL
                                                                           params:params
                                                                      cachePolicy:(NWSessionReloadIgnoringLocalCacheData)
                                                                  timeoutInterval:5
                                                                       HTTPMethod:HTTPMethod
                                                                 HTTPHeaderFields:headerFields
                                                                completionHandler:^(NSDictionary *responseDic, NSError *error) {
                                                                    if (__OKEX_Show_Log) {
                                                                        NSString *string = [NSString stringWithFormat:@"\n请求URL:%@ \n参数：%@, \nheader:%@ \n返回值：%@", fullURL, params, headerFields, responseDic ?: error];
                                                                        NSLog(@"%@", string);
                                                                    }
                                                                    if (completionHandler) {
                                                                        completionHandler(responseDic, error);
                                                                    }
                                                                }];
    return task;
}

+ (NSString *)nowDateString {
    NSDate *now = [NSDate date];
    return [now isoTimeString];
}


@end
