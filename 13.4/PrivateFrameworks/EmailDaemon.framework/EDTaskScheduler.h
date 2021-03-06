//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EDTaskScheduler : NSObject
{
    _Bool _observeForNetworkReachability;
    _Bool _isReachable;
    _Bool _pendingWaitingForNetwork;
    double _initialDelay;
    double _maxBackOffInterval;
    double _backoffMultiplier;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_executionQueue;
    double _backOffInterval;
    CDUnknownBlockType _task;
    CDUnknownBlockType _canceledCallback;
    CDUnknownBlockType _work;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType work; // @synthesize work=_work;
@property(copy, nonatomic) CDUnknownBlockType canceledCallback; // @synthesize canceledCallback=_canceledCallback;
@property(copy, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
@property(nonatomic) _Bool pendingWaitingForNetwork; // @synthesize pendingWaitingForNetwork=_pendingWaitingForNetwork;
@property(nonatomic) _Bool isReachable; // @synthesize isReachable=_isReachable;
@property(nonatomic) double backOffInterval; // @synthesize backOffInterval=_backOffInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(nonatomic) _Bool observeForNetworkReachability; // @synthesize observeForNetworkReachability=_observeForNetworkReachability;
@property(nonatomic) double backoffMultiplier; // @synthesize backoffMultiplier=_backoffMultiplier;
@property(nonatomic) double maxBackOffInterval; // @synthesize maxBackOffInterval=_maxBackOffInterval;
@property(nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
- (void)_cancelTimer;
- (void)_incrementBackoffInterval;
- (void)_reportReachabilityChange:(id)arg1;
- (void)_stopObservingNetworkReachability;
- (void)_startObservingNetworkReachability;
- (void)_doScheduleTask:(CDUnknownBlockType)arg1 canceledCallback:(CDUnknownBlockType)arg2;
- (void)rescheduleTask;
- (void)scheduleTask:(CDUnknownBlockType)arg1 canceledCallback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithExecutionQueue:(id)arg1;

@end

