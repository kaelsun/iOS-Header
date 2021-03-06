//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDSStallDetector : NSObject
{
    _Bool _verboseLogging;
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _stallDetectedBlock;
    CDUnknownBlockType _stallWarningBlock;
    unsigned long long _consumeDelayThreshold;
    double _byteMovementDelayThreshold;
    NSMutableArray *_bytesHistory;
    NSMutableArray *_bytesTimestamps;
}

+ (void)removeDetectorWithName:(id)arg1;
+ (id)detectorWithName:(id)arg1;
+ (id)newDetectorWithName:(id)arg1 stallDetectedBlock:(CDUnknownBlockType)arg2 stallWarningBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool verboseLogging; // @synthesize verboseLogging=_verboseLogging;
- (void).cxx_destruct;
- (void)forceTriggerStallDetectedBlockWithEventName:(id)arg1;
- (void)reset;
- (void)consumeBytes:(int)arg1;
- (void)produceBytes:(int)arg1;
- (_Bool)byteMovementCheckForEvent:(id)arg1;
- (_Bool)consumeTimeCheckForEvent:(id)arg1 produceTime:(unsigned long long)arg2 consumeTime:(unsigned long long)arg3;
@property(nonatomic) double byteMovementDelayThreshold;
@property(nonatomic) unsigned long long consumeDelayThreshold;

@end

