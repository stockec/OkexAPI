//
//  NSDate+String.m
//  VirtualCurrency
//
//  Created by zhtg on 2018/12/25.
//  Copyright © 2018 egst. All rights reserved.
//

#import "NSDate+String.h"

@implementation NSDate (String)

+ (NSString *)isoDateFormat {
    return @"yyyy-MM-dd'T'HH:mm:ss.SSS'Z'";
}

+ (NSDate *)dateWithISOTimeString:(NSString *)isoTimeString {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    NSLocale *enUSPOSIXLocale = [NSLocale localeWithLocaleIdentifier:@"en_US_POSIX"];
    [dateFormatter setLocale:enUSPOSIXLocale];
    [dateFormatter setDateFormat:[self isoDateFormat]];
    
    NSDate *date = [dateFormatter dateFromString:isoTimeString];
    return date;
}

- (NSString *)isoTimeString {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    NSTimeZone *timeZone = [NSTimeZone timeZoneForSecondsFromGMT:0];
    [dateFormatter setTimeZone:timeZone];
    [dateFormatter setDateFormat:[[self class] isoDateFormat]];

    NSDate *now = self;
    NSString *iso8601String = [dateFormatter stringFromDate:now];
    return iso8601String;
}

@end
