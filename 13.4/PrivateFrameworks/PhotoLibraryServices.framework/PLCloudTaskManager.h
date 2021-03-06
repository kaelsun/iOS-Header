//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PLCloudTaskManager : NSObject
{
    NSMutableDictionary *_pendingTaskForTaskIdentifier;
    NSMutableDictionary *_highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary *_lowPriorityResourceToTaskIdentifierMap;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
- (void)_removeTaskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(_Bool)arg2;
- (void)_setTaskIdentifiers:(id)arg1 forResourceIdentifier:(id)arg2 highPriority:(_Bool)arg3;
- (id)_taskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(_Bool)arg2;
- (id)_taskForResourceIdentifier:(id)arg1 highPriority:(_Bool)arg2;
- (void)reset;
- (void)cancelTaskWithTaskIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getPendingTaskForTaskIdentifier:(id)arg1;
- (void)reportCompletionForResourceIdentifier:(id)arg1 highPriority:(_Bool)arg2 withError:(id)arg3;
- (void)reportProgress:(float)arg1 forResourceIdentifier:(id)arg2 highPriority:(_Bool)arg3;
- (void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2;
- (_Bool)addProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forResourceIdentifier:(id)arg3 highPriority:(_Bool)arg4 withTaskIdentifier:(id)arg5;
- (id)init;

@end

