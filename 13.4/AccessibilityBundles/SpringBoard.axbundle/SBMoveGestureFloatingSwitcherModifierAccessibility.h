//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__SBMoveGestureFloatingSwitcherModifierAccessibility_super.h"

@interface SBMoveGestureFloatingSwitcherModifierAccessibility : __SBMoveGestureFloatingSwitcherModifierAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (long long)_axFloatingConfigurationForGestureEvent:(id)arg1 withZeroVelocity:(_Bool)arg2;
- (long long)_axInitialFloatingConfiguration;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (void)_axSetFinishedFloatingConfiguration:(long long)arg1;
- (long long)_axGetFinishedFloatingConfiguration;
- (void)_axSetCurrentFloatingConfiguration:(long long)arg1;
- (long long)_axGetCurrentFloatingConfiguration;

@end

