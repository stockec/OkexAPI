//
//  OKPostSpotOrdersPO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKPostSpotOrdersPO : NSObject

@property(nonatomic,strong) NSString *client_oid; // ":"oktspot79",
@property(nonatomic,strong) NSString *error_code; //":0,
@property(nonatomic,strong) NSString *error_message; //":"",
@property(nonatomic,strong) NSString *order_id; //":"2510789768709120",
@property(nonatomic,strong) NSString *result; //":true

@end
