//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BridgePreferences/BPSSetupOptinViewController.h>

#import "COSBuddyController-Protocol.h"

@class NSString;

@interface COSOptinViewController : BPSSetupOptinViewController <COSBuddyController>
{
}

- (void)finishedActivating;
- (void)didEstablishHold;
- (_Bool)holdBeforeDisplaying;
- (id)holdActivityIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

