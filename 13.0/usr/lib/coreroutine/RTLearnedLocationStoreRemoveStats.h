//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface RTLearnedLocationStoreRemoveStats : NSObject
{
    unsigned long long _type;
    NSNumber *_ageOfOldestRecordInDays;
    NSArray *_agesInDays;
}

+ (unsigned long long)typeFromEntityName:(id)arg1;
@property(readonly) NSArray *agesInDays; // @synthesize agesInDays=_agesInDays;
@property(readonly) NSNumber *ageOfOldestRecordInDays; // @synthesize ageOfOldestRecordInDays=_ageOfOldestRecordInDays;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 ageOfOldestRecord:(id)arg2 ages:(id)arg3;

@end

