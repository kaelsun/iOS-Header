//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DisplayAlert-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AppLaunchLocationAlert : NSObject <DisplayAlert>
{
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)_alertDidFinishProcessing;
- (void)_locationAuthorizationDismissed:(id)arg1;
- (void)_presentAlertUI;
- (_Bool)_shouldDisplayAlert;
- (void)displayAlertIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

