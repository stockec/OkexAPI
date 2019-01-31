//
//  OKSwapAccountsInstrument_idSettingsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSwapAccountsInstrument_idSettingsRO.h"
#import "OKSwapAccountsInstrument_idSettingsPO.h"

@interface OKSwapAccountsInstrument_idSettingsAPI : NSObject

@property(nonatomic,strong) OKSwapAccountsInstrument_idSettingsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSwapAccountsInstrument_idSettingsPO *po, NSError *error))completionHandler;

@end