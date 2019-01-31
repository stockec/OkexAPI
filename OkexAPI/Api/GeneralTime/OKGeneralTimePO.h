//
//  OKGeneralTimePO.h
//  AutoAPI
//
//  Created by zhtg on 2018/7/18.
//  Copyright © 2018年 zzz. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface OKGeneralTimePO : NSObject

@property(nonatomic,strong) NSString *iso; // iso    ISO8601标准的时间格式
@property(nonatomic,strong) NSString *epoch; // epoch    UTC时区Unix时间戳的十进制秒数格式

@end