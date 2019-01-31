//
//  OKSpotInstrumentsInstrument_idBookAPI.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OKSpotInstrumentsInstrument_idBookRO.h"
#import "OKSpotInstrumentsInstrument_idBookPO.h"

@interface OKSpotInstrumentsInstrument_idBookAPI : NSObject

@property(nonatomic,strong) OKSpotInstrumentsInstrument_idBookRO *ro;

- (NSURLSessionTask *)sendRequestWithCompletionHandler:(void(^)(OKSpotInstrumentsInstrument_idBookPO *po, NSError *error))completionHandler;

@end