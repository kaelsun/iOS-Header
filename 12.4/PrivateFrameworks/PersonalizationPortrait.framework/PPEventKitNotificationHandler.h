//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPNotificationHandler.h>

@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PPEventKitNotificationHandler : PPNotificationHandler
{
    struct atomic_flag _isFiring;
    struct atomic_flag _hasWaiter;
    NSMutableSet *_events;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (id)description;
- (void)_clearFlags;
- (void)fireWithEvents:(id)arg1;
- (id)_popEvents;
- (void)_pushEvents:(id)arg1;
- (void)_executeBlocksWithEvents:(id)arg1;
- (id)initWithName:(id)arg1 waitTime:(unsigned int)arg2;

@end

