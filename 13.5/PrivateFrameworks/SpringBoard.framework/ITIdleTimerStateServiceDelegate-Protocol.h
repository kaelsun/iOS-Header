//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BSProcessHandle, ITIdleTimerConfiguration, NSString;
@protocol BSInvalidatable;

@protocol ITIdleTimerStateServiceDelegate
- (id <BSInvalidatable>)acquireIdleTimerAssertionWithConfiguration:(ITIdleTimerConfiguration *)arg1 fromClient:(BSProcessHandle *)arg2 forReason:(NSString *)arg3;
@end

