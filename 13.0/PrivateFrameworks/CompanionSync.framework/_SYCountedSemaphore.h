//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SYCountedSemaphore : NSObject
{
    _Atomic unsigned int _sem_port;
    _Atomic int _count;
    _Atomic int _signals;
    _Atomic _Bool _invalidated;
}

- (void)_signalSemaphore;
- (_Bool)_waitSemaphoreWithTimeout:(double)arg1;
- (void)signal;
- (_Bool)waitWithTimeout:(double)arg1;
- (void)_ensureSemaphore;
- (void)invalidate;
- (id)initWithCount:(long long)arg1;
- (id)init;

@end

