//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBBiometricUnlockBehaviorConfiguration-Protocol.h>
#import <SpringBoard/SBLiftToWakeObserver-Protocol.h>

@class CSLockScreenSettings, NSString, SBLiftToWakeController, SBUIBiometricResource;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration>
{
    id <SBBiometricUnlockBehaviorConfigurationDelegate> _delegate;
    SBLiftToWakeController *_liftToWakeController;
    CSLockScreenSettings *_prototypeSettings;
    SBUIBiometricResource *_biometricResource;
    Class _currentTriggerClass;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBBiometricUnlockBehaviorConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (Class)_expectedTriggerClassIncludingAccessibility:(_Bool)arg1;
- (id)_unlockTriggerWithClass:(Class)arg1;
- (void)_accessibilityOptionsChanged:(id)arg1;
- (void)liftToWakeControllerEnablementDidChange:(id)arg1;
- (void)_evaluateTriggerClass;
- (Class)_currentUnlockTriggerClass;
- (_Bool)_isAccessibilityRestingUnlockPreferenceEnabled;
- (id)newBehaviorForCurrentConfiguration;
- (void)dealloc;
- (id)initWithLiftToWakeController:(id)arg1 biometricResource:(id)arg2 lockScreenPrototypeSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

