//
//  NSArray+Index.m
//  VirtualCurrency
//
//  Created by zhtg on 2018/12/26.
//  Copyright © 2018 egst. All rights reserved.
//

#import "NSArray+Index.h"

@implementation NSArray (Index)

- (id)objAtIndex:(NSUInteger)index {
    if (self.count > index) {
        return [self objectAtIndex:index];
    }
    return nil;
}

@end
