//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHASleepWakeMonitor : NSObject
{
    unsigned int _powerAssertionID;
}

+ (_Bool)isSystemInDarkWake;
@property unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
- (void)releaseUserIdlePowerAssertion;
- (void)takeUserIdlePowerAssertion;

@end

