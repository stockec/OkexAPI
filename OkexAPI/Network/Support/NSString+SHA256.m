//
//  NSString+SHA256.m
//  VirtualCurrency
//
//  Created by zhtg on 2018/12/25.
//  Copyright © 2018 egst. All rights reserved.
//

#import "NSString+SHA256.h"
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonHMAC.h>

@implementation NSString (SHA256)

- (NSData *)hmacWithKey:(NSString *)key
{
    NSString *plaintext = self;
    const char *cKey  = [key UTF8String];
    const char *cData = [plaintext UTF8String];
    unsigned char cHMAC[CC_SHA256_DIGEST_LENGTH];
    CCHmac(kCCHmacAlgSHA256, cKey, key.length, cData, plaintext.length, cHMAC);
    NSData *HMACData = [NSData dataWithBytes:cHMAC length:sizeof(cHMAC)];
    return HMACData;
}

- (NSString *)hmacBase64StringWithKey:(NSString *)key
{
    NSData *HMACData = [self hmacWithKey:key];
    return [HMACData base64EncodedStringWithOptions:0];
}

@end
