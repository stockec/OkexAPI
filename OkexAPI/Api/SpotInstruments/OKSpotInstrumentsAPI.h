//
//  OKSpotInstrumentsAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotInstrumentsRO.h"
#import "OKSpotInstrumentsPO.h"

@interface OKSpotInstrumentsAPI : NSObject

@property(nonatomic,strong) OKSpotInstrumentsRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotInstrumentsPO *po, NSError *error))completionHandler;

@end