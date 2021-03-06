//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SBSRemoteAlertClient : FBSServiceFacilityClient
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_handleObserverQueue;
    NSMutableDictionary *_portToHandleMap;
    NSMutableDictionary *_portToDeathSentinelMap;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handleObserverQueue; // @synthesize handleObserverQueue=_handleObserverQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_queue_removeHandleForTokenStore:(id)arg1 withErrorCode:(long long)arg2 underlyingError:(id)arg3;
- (id)_queue_addHandleForToken:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)queue_invalidateRemoteAlertForHandle:(id)arg1;
- (void)queue_activateRemoteAlertForHandle:(id)arg1 withContext:(id)arg2;
- (id)queue_newHandleForRemoteAlertWithDefinition:(id)arg1 context:(id)arg2;
- (void)queue_lookupHandlesForRemoteAlertWithDefinition:(id)arg1 creatingIfNone:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;

@end

