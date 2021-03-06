//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSDeviceMessengerClientInterface-Protocol.h>

@class AMSDaemonConnection, NSMutableArray, NSString;
@protocol AMSDeviceMessengerServiceInterface, OS_dispatch_queue;

@interface AMSDeviceMessenger : NSObject <AMSDeviceMessengerClientInterface>
{
    id <AMSDeviceMessengerServiceInterface> _proxyObject;
    AMSDaemonConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_updateHandlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *updateHandlers; // @synthesize updateHandlers=_updateHandlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) AMSDaemonConnection *connection; // @synthesize connection=_connection;
- (void)_sendDelegateUpdateForMessage:(id)arg1;
- (id)_identifierFromDialogRequest:(id)arg1;
- (id)_getProxyObject;
- (void)deviceMessengerDidUpdateDevices;
- (void)deviceMessengerDidReceiveReply:(id)arg1;
- (void)deviceMessengerDidReceiveMessage:(id)arg1;
- (void)deviceMessengerDidClearMessage:(id)arg1;
- (id)sendDialog:(id)arg1 account:(id)arg2;
- (id)clearDialog:(id)arg1;
- (id)dialogsWithFilter:(id)arg1;
- (void)addUpdateHandlerForType:(long long)arg1 filter:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

