//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, _CDClientContext, _DKKnowledgeStore;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying, _DKKnowledgeSaving;

@interface HMDDuetEventManager : HMFObject
{
    _CDClientContext *_context;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <_DKKnowledgeSaving> _saveStore;
    _DKKnowledgeStore *_deleteStore;
    id <_DKKnowledgeQuerying> _queryStore;
}

+ (id)sharedInstance;
+ (id)identifierForType:(unsigned long long)arg1 eventValue:(id)arg2;
+ (id)eventTypeAsString:(unsigned long long)arg1;
+ (id)eventStreamForType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> queryStore; // @synthesize queryStore=_queryStore;
@property(retain, nonatomic) _DKKnowledgeStore *deleteStore; // @synthesize deleteStore=_deleteStore;
@property(retain, nonatomic) id <_DKKnowledgeSaving> saveStore; // @synthesize saveStore=_saveStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) _CDClientContext *context; // @synthesize context=_context;
- (id)dumpAllEvents;
- (id)dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)_dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (void)resetAllEvents;
- (void)deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (void)_deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)_queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (void)logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5;
- (void)_logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5;
- (void)_logToCoreDuetStoreEventWithType:(unsigned long long)arg1 metadata:(id)arg2;
- (id)init;

@end

