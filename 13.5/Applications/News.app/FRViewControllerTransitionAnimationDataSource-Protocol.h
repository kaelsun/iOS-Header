//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRTransitionAnimationParameters, UIViewController;
@protocol FRViewControllerTransitionConducting;

@protocol FRViewControllerTransitionAnimationDataSource <NSObject>
- (FRTransitionAnimationParameters *)viewControllerTransitionConductor:(id <FRViewControllerTransitionConducting>)arg1 animationParametersForTransitionFromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;
@end

