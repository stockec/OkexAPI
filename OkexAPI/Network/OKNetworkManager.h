//
//  OKNetworkManager.h
//  VirtualCurrency
//
//  Created by zhtg on 2019/1/23.
//  Copyright © 2019 egst. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OKNetworkManager : NSObject

+ (NSURLSessionTask *)sendRequestWithPath:(NSString *)path
                                   params:(nullable id)params
                               HTTPMethod:(NSString *)HTTPMethod
                        completionHandler:(void (^)(NSDictionary *responseDic, NSError *error))completionHandler;

@end

NS_ASSUME_NONNULL_END
