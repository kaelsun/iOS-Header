//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TestFlightCore/SBSRemoteAlertHandleObserver-Protocol.h>

@class BSProcessHandle, NSString;
@protocol TFBetaLaunchHandleActivationDelegate;

@interface TFBetaLaunchHandle : NSObject <SBSRemoteAlertHandleObserver>
{
    id <TFBetaLaunchHandleActivationDelegate> _activationDelegate;
    BSProcessHandle *_processHandle;
    NSString *_logKey;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) BSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property(nonatomic) __weak id <TFBetaLaunchHandleActivationDelegate> activationDelegate; // @synthesize activationDelegate=_activationDelegate;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)_updatedLaunchInfoForActivation:(id)arg1;
- (void)_activateRemoteAlertWithLaunchInfo:(id)arg1;
- (void)activateForTestingWithLaunchInfo:(id)arg1;
- (_Bool)_remoteAlertShouldActivateForLaunchInfo:(id)arg1;
- (void)activateIfNeeded;
- (id)initWithProcessHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

