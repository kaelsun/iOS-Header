//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKSerializableObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface EKSerializableAlarm : EKSerializableObject
{
    _Bool _isAbsolute;
    double _relativeOffset;
    NSDate *_absoluteDate;
}

+ (id)classesForKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAbsolute; // @synthesize isAbsolute=_isAbsolute;
@property(copy, nonatomic) NSDate *absoluteDate; // @synthesize absoluteDate=_absoluteDate;
@property(nonatomic) double relativeOffset; // @synthesize relativeOffset=_relativeOffset;
- (id)createAlarm:(id *)arg1;
- (id)initWithAlarm:(id)arg1;

@end

