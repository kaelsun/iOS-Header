//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFMessageDispatcher, HMXPCClient, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject <HMFMessageReceiver>
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMXPCClient *_xpcClient;
    HMFMessageDispatcher *_msgDispatcher;
    NSUUID *_uuid;
}

+ (_Bool)areAnyTelevisionAccessoriesConfigured;
+ (_Bool)areAnySpeakersConfigured;
+ (_Bool)areAnyAccessoriesConfigured;
+ (id)siriHomeIdentifier;
+ (_Bool)areHomesConfigured;
+ (id)sharedInstance;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)_reportIntentResultTohandler:(CDUnknownBlockType)arg1;
- (void)_reportResultsTohandler:(CDUnknownBlockType)arg1;
- (void)requestSiriSyncDataWithValidity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendIntentRequestCommand:(id)arg1 withPayload:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendSiriCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerToDaemon;
- (void)_start;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)dealloc;
- (id)initWithNoValidation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

