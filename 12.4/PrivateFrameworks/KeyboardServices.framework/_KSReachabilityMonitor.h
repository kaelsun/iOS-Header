//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _KSReachabilityMonitor : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _isInternetReachable;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)startMonitoring;
- (void).cxx_destruct;
- (void)reachabilityDidChange:(_Bool)arg1;
- (void)queryInitialState;
- (void)dealloc;
- (id)init;

@end

