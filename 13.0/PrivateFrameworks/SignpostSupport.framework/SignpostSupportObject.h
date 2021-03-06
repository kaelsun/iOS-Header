//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostSerializable-Protocol.h>
#import <SignpostSupport/SignpostSupportTimeInterval-Protocol.h>

@class NSDate, NSString;

@interface SignpostSupportObject : NSObject <SignpostSerializable, SignpostSupportTimeInterval>
{
    NSString *_subsystem;
    NSString *_category;
    double _timebaseRatio;
}

+ (id)headerWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
+ (id)serializationTypeNumber;
@property(nonatomic) double timebaseRatio; // @synthesize timebaseRatio=_timebaseRatio;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (void).cxx_destruct;
- (id)_containedObjectsFromArray:(id)arg1;
- (_Bool)_containsTimeObject:(id)arg1;
- (_Bool)_containsMCT:(unsigned long long)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (double)durationMs;
- (double)endMs;
- (double)startMs;
- (double)startSeconds;
- (double)endSeconds;
- (unsigned long long)durationNanoseconds;
@property(readonly, nonatomic) float durationSeconds;
@property(readonly, nonatomic) unsigned long long durationMachContinuousTime;
@property(readonly, nonatomic) unsigned long long endNanoseconds;
@property(readonly, nonatomic) unsigned long long endMachContinuousTime;
@property(readonly, nonatomic) unsigned long long startNanoseconds;
@property(readonly, nonatomic) unsigned long long startMachContinuousTime;
@property(readonly, nonatomic) int tz_dsttime;
@property(readonly, nonatomic) int tz_minuteswest;
@property(readonly, nonatomic) int tv_usec;
@property(readonly, nonatomic) long long tv_sec;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(_Bool)arg3;
- (id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
- (id)_descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2 asBegin:(_Bool)arg3;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *beginDate;
- (_Bool)endTimeval:(struct timeval *)arg1;
- (_Bool)beginTimeval:(struct timeval *)arg1;
- (_Bool)endTimezone:(struct timezone *)arg1;
- (_Bool)beginTimezone:(struct timezone *)arg1;
- (_Bool)_hasEndTimeval;
- (_Bool)_hasBeginTimeval;
- (id)endWallTimeStringWithTimeZoneName:(id)arg1;
- (id)beginWallTimeStringWithTimeZoneName:(id)arg1;
- (id)_wallTimeStringWithTimeZone:(id)arg1 isBegin:(_Bool)arg2;
- (void)_adjustEndTimeVal:(struct timeval *)arg1;
- (void)_adjustBeginTimeVal:(struct timeval *)arg1;
- (_Bool)_populateTimeStruct:(struct time *)arg1 withTimeval:(struct timeval *)arg2 withTZString:(id)arg3;
- (id)humanReadableType;
- (id)initWithDictionary:(id)arg1;
- (id)humanReadableDictionaryRepresentation;
- (id)serializeableDictionaryWithShouldRedact:(_Bool)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

