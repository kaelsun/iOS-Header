//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/MTStateMachineDelegate-Protocol.h>

@class MTSleepCoordinatorStateMachine, NSDate;

@protocol MTSleepCoordinatorStateMachineDelegate <MTStateMachineDelegate>
- (void)stateMachine:(MTSleepCoordinatorStateMachine *)arg1 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)arg2;
- (void)stateMachine:(MTSleepCoordinatorStateMachine *)arg1 dismissWakeUpAlarm:(NSDate *)arg2 dismissAction:(unsigned long long)arg3;
- (void)stateMachineUserWentToBed:(MTSleepCoordinatorStateMachine *)arg1;
- (void)stateMachineUserWokeUp:(MTSleepCoordinatorStateMachine *)arg1;
@end

