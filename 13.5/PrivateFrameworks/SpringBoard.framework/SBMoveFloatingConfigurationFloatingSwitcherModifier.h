//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    long long _fromFloatingConfiguration;
    long long _toFloatingConfiguration;
}

- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (_Bool)wantsResignActiveAssertion;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (id)layoutSettings;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)arg1 fromFloatingConfiguration:(long long)arg2 toFloatingConfiguration:(long long)arg3;

@end

