//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@protocol HKNumberFormatter;

@protocol HKDecimalPrecisionRule <NSObject>
- (id <HKNumberFormatter>)numberFormatter;
- (long long)decimalPrecisionForValue:(double)arg1;
- (long long)minimumDecimalPrecision;
- (long long)maximumDecimalPrecision;
@end

