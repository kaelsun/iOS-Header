//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BSSerializedRequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _conditionBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)_enqueueSerialConditionalRequest:(CDUnknownBlockType)arg1;
- (void)enqueueAsyncRequest:(CDUnknownBlockType)arg1;
- (void)enqueueRequest:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSerialQueue:(id)arg1 workQueue:(id)arg2 executionCondition:(CDUnknownBlockType)arg3;

@end

