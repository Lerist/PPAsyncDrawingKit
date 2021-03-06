//
//  PPTextUtilties.h
//  PPAsyncDrawingKit
//
//  Created by DSKcpp on 2017/1/10.
//  Copyright © 2017年 DSKcpp. All rights reserved.
//

#import <Foundation/Foundation.h>

static inline CFRange PPNSRangeToCFRange(NSRange range) {
    return CFRangeMake(range.location, range.length);
}

static inline NSRange PPNSRangeFromCFRange(CFRange range) {
    return NSMakeRange(range.location, range.length);
}

static inline NSUInteger PPNSRangeStart(NSRange range) {
    return range.location;
}

static inline NSUInteger PPNSRangeEnd(NSRange range) {
    return range.location + range.length;
}
