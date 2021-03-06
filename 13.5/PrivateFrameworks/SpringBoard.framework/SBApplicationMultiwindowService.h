//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationServerMultiwindowDelegate-Protocol.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBApplicationMultiwindowService : NSObject <SBApplicationServerMultiwindowDelegate>
{
    FBServiceClientAuthenticator *_serviceClientAccessEntitlementAuthenticator;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1;
- (void)applicationServer:(id)arg1 client:(id)arg2 showAllWindowsForBundleIdentifier:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

