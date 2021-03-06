//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantityType, NSString;

@interface HKDataCollectorTaskServerConfiguration : HKTaskConfiguration
{
    HKQuantityType *_quantityType;
    NSString *_bundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQuantityType:(id)arg1 bundleIdentifier:(id)arg2;

@end

