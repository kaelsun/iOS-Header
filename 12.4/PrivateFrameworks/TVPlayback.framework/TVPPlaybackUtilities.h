//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVPPlaybackUtilities : NSObject
{
}

+ (long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(_Bool)arg5;
+ (long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2;
+ (double)playedThresholdTimeForDuration:(double)arg1;

@end

