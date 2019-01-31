//
//  OKAccountDepositAddressAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKAccountDepositAddressRO.h"
#import "OKAccountDepositAddressPO.h"

@interface OKAccountDepositAddressAPI : NSObject

@property(nonatomic,strong) OKAccountDepositAddressRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKAccountDepositAddressPO *po, NSError *error))completionHandler;

@end