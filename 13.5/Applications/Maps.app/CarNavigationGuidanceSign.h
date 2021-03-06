//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CarGuidanceCard-Protocol.h"
#import "CarManeuverViewWidthDelegate-Protocol.h"
#import "NavJunctionViewHeightDelegate-Protocol.h"

@class CarHairlineView, CarManeuverView, GuidanceETA, NSArray, NSLayoutConstraint, NSString, NSUUID, NavJunctionViewController, NavJunctionViewInfo, NavSignLaneGuidanceInfo, NavSignManeuverGuidanceInfo, UILayoutGuide;
@protocol CarGuidanceCardDelegate;

__attribute__((visibility("hidden")))
@interface CarNavigationGuidanceSign : UIView <NavJunctionViewHeightDelegate, CarManeuverViewWidthDelegate, CarGuidanceCard>
{
    double _widthAtLastCompressionUpdate;
    _Bool _secondaryViewHidden;
    _Bool _junctionViewHidden;
    _Bool _junctionViewTemporarilyHidden;
    UILayoutGuide *_minimumCompressedContentLayoutGuide;
    id <CarGuidanceCardDelegate> _guidanceCardDelegate;
    NavSignManeuverGuidanceInfo *_primaryGuidance;
    NavSignManeuverGuidanceInfo *_secondaryGuidance;
    NavSignLaneGuidanceInfo *_laneGuidanceInfo;
    NavJunctionViewInfo *_junctionViewInfo;
    GuidanceETA *_latestETA;
    unsigned long long _guidanceType;
    UIView *_primaryView;
    NSArray *_primaryViewOnlyConstraints;
    CarHairlineView *_hairlineView;
    UIView *_secondaryView;
    NSArray *_secondaryViewConstraints;
    NSLayoutConstraint *_secondaryViewHeightConstraint;
    CarManeuverView *_primaryManeuver;
    NSArray *_primaryManeuverConstraints;
    CarManeuverView *_secondaryManeuver;
    NSArray *_secondaryManeuverConstraints;
    NavJunctionViewController *_junctionViewController;
    NSArray *_junctionViewConstraints;
    NSLayoutConstraint *_junctionViewTopConstraint;
    CarManeuverView *_nextPrimaryManeuver;
    CarManeuverView *_nextSecondaryManeuver;
    CarManeuverView *_compressedPrimaryManeuver;
    NSUUID *_primaryGuidanceSignID;
    NSUUID *_secondaryGuidanceSignID;
    NSUUID *_laneGuidanceInfoID;
    NSUUID *_junctionViewInfoID;
    double _desiredHeight;
    unsigned long long _compressionStage;
    unsigned long long _layoutType;
    unsigned long long _destination;
    NSLayoutConstraint *_minimumCompressedContentLayoutGuideHeightConstraint;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *minimumCompressedContentLayoutGuideHeightConstraint; // @synthesize minimumCompressedContentLayoutGuideHeightConstraint=_minimumCompressedContentLayoutGuideHeightConstraint;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) _Bool junctionViewTemporarilyHidden; // @synthesize junctionViewTemporarilyHidden=_junctionViewTemporarilyHidden;
@property(nonatomic) _Bool junctionViewHidden; // @synthesize junctionViewHidden=_junctionViewHidden;
@property(nonatomic) _Bool secondaryViewHidden; // @synthesize secondaryViewHidden=_secondaryViewHidden;
@property(nonatomic) unsigned long long compressionStage; // @synthesize compressionStage=_compressionStage;
@property(nonatomic) double desiredHeight; // @synthesize desiredHeight=_desiredHeight;
@property(retain, nonatomic) NSUUID *junctionViewInfoID; // @synthesize junctionViewInfoID=_junctionViewInfoID;
@property(retain, nonatomic) NSUUID *laneGuidanceInfoID; // @synthesize laneGuidanceInfoID=_laneGuidanceInfoID;
@property(retain, nonatomic) NSUUID *secondaryGuidanceSignID; // @synthesize secondaryGuidanceSignID=_secondaryGuidanceSignID;
@property(retain, nonatomic) NSUUID *primaryGuidanceSignID; // @synthesize primaryGuidanceSignID=_primaryGuidanceSignID;
@property(retain, nonatomic) CarManeuverView *compressedPrimaryManeuver; // @synthesize compressedPrimaryManeuver=_compressedPrimaryManeuver;
@property(retain, nonatomic) CarManeuverView *nextSecondaryManeuver; // @synthesize nextSecondaryManeuver=_nextSecondaryManeuver;
@property(retain, nonatomic) CarManeuverView *nextPrimaryManeuver; // @synthesize nextPrimaryManeuver=_nextPrimaryManeuver;
@property(retain, nonatomic) NSLayoutConstraint *junctionViewTopConstraint; // @synthesize junctionViewTopConstraint=_junctionViewTopConstraint;
@property(retain, nonatomic) NSArray *junctionViewConstraints; // @synthesize junctionViewConstraints=_junctionViewConstraints;
@property(retain, nonatomic) NavJunctionViewController *junctionViewController; // @synthesize junctionViewController=_junctionViewController;
@property(retain, nonatomic) NSArray *secondaryManeuverConstraints; // @synthesize secondaryManeuverConstraints=_secondaryManeuverConstraints;
@property(retain, nonatomic) CarManeuverView *secondaryManeuver; // @synthesize secondaryManeuver=_secondaryManeuver;
@property(retain, nonatomic) NSArray *primaryManeuverConstraints; // @synthesize primaryManeuverConstraints=_primaryManeuverConstraints;
@property(retain, nonatomic) CarManeuverView *primaryManeuver; // @synthesize primaryManeuver=_primaryManeuver;
@property(retain, nonatomic) NSLayoutConstraint *secondaryViewHeightConstraint; // @synthesize secondaryViewHeightConstraint=_secondaryViewHeightConstraint;
@property(retain, nonatomic) NSArray *secondaryViewConstraints; // @synthesize secondaryViewConstraints=_secondaryViewConstraints;
@property(retain, nonatomic) UIView *secondaryView; // @synthesize secondaryView=_secondaryView;
@property(retain, nonatomic) CarHairlineView *hairlineView; // @synthesize hairlineView=_hairlineView;
@property(retain, nonatomic) NSArray *primaryViewOnlyConstraints; // @synthesize primaryViewOnlyConstraints=_primaryViewOnlyConstraints;
@property(retain, nonatomic) UIView *primaryView; // @synthesize primaryView=_primaryView;
@property(nonatomic) unsigned long long guidanceType; // @synthesize guidanceType=_guidanceType;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
@property(retain, nonatomic) NavJunctionViewInfo *junctionViewInfo; // @synthesize junctionViewInfo=_junctionViewInfo;
@property(retain, nonatomic) NavSignLaneGuidanceInfo *laneGuidanceInfo; // @synthesize laneGuidanceInfo=_laneGuidanceInfo;
@property(retain, nonatomic) NavSignManeuverGuidanceInfo *secondaryGuidance; // @synthesize secondaryGuidance=_secondaryGuidance;
@property(retain, nonatomic) NavSignManeuverGuidanceInfo *primaryGuidance; // @synthesize primaryGuidance=_primaryGuidance;
@property(nonatomic) __weak id <CarGuidanceCardDelegate> guidanceCardDelegate; // @synthesize guidanceCardDelegate=_guidanceCardDelegate;
@property(readonly, nonatomic) UILayoutGuide *minimumCompressedContentLayoutGuide; // @synthesize minimumCompressedContentLayoutGuide=_minimumCompressedContentLayoutGuide;
- (void)_handleCarScreenSizeChange;
- (double)availableWidth;
- (void)updateWithGroupAnimation:(id)arg1;
- (unsigned long long)_desiredCompressionStage;
- (void)_replaceSecondaryViewManeuver:(id)arg1 initialConstraints:(id)arg2 finalConstraints:(id)arg3;
- (void)_replacePrimaryViewManeuver:(id)arg1 initialConstraints:(id)arg2 finalConstraints:(id)arg3 slide:(_Bool)arg4;
- (double)complementarySignHeightForManeuverView:(id)arg1;
- (void)_prepareManeuverView:(id)arg1;
- (double)maxAvailableHeightForJunctionView:(double)arg1;
- (void)hideJunctionViewAnimated:(_Bool)arg1;
- (void)showJunctionViewAnimated:(_Bool)arg1;
- (void)refreshJunctionView;
- (void)_updateCompressionStage;
- (void)_resetPrecalculatedCompressionSizes;
- (void)setBlurMode:(int)arg1;
- (_Bool)_shouldForceSecondaryManeuverViewHidden;
- (_Bool)isPointInJunctionView:(struct CGPoint)arg1;
@property(readonly, nonatomic) UIView *junctionView;
@property(readonly, nonatomic) CarManeuverView *secondaryManeuverView;
@property(readonly, nonatomic) CarManeuverView *primaryManeuverView;
- (void)layoutSubviews;
- (double)_heightForCompressionStage:(unsigned long long)arg1 isMaximumCompression:(_Bool *)arg2;
- (void)dealloc;
- (id)initWithDestination:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

