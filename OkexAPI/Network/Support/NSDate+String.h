//
//  NSDate+String.h
//  VirtualCurrency
//
//  Created by zhtg on 2018/12/25.
//  Copyright © 2018 egst. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (String)

+ (NSDate *)dateWithISOTimeString:(NSString *)isoTimeString;
- (NSString *)isoTimeString;

@end

NS_ASSUME_NONNULL_END
