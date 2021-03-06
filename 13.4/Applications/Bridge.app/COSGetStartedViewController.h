//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "COSGetStartedDelegate-Protocol.h"

@class COSGetStartedInternalViewController, NSString;
@protocol COSGetStartedViewControllerDelegate;

@interface COSGetStartedViewController : UINavigationController <COSGetStartedDelegate>
{
    _Bool _didRegisterNRObserver;
    id <COSGetStartedViewControllerDelegate> _getStartedDelegate;
    COSGetStartedInternalViewController *_internalController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) COSGetStartedInternalViewController *internalController; // @synthesize internalController=_internalController;
@property(nonatomic) _Bool didRegisterNRObserver; // @synthesize didRegisterNRObserver=_didRegisterNRObserver;
@property(nonatomic) __weak id <COSGetStartedViewControllerDelegate> getStartedDelegate; // @synthesize getStartedDelegate=_getStartedDelegate;
- (void)nanoRegistryStatusChanged:(id)arg1;
- (void)showConnectivityAlert;
- (void)userTappedSubmitRadar;
- (void)userTappedStart;
- (void)tappedStartInternal;
- (void)presentUnpairingViewControllerAnimated:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setOrientationModeForSize:(struct CGSize)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)_unregisterNRObserver;
- (void)_registerNRObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

