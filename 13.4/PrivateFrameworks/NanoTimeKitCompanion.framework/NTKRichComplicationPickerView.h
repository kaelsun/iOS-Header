//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKEditOptionContainerView-Protocol.h>

@class NSMutableDictionary, NSString;

@interface NTKRichComplicationPickerView : UIView <NTKEditOptionContainerView>
{
    NSMutableDictionary *_sideViews;
    double _fraction;
    unsigned long long _fromSide;
    unsigned long long _toSide;
    long long _animationType;
}

- (void).cxx_destruct;
- (void)_updateViews;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
- (void)transitionToSideAtIndex:(unsigned long long)arg1;
- (void)enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)viewForSideAtIndex:(unsigned long long)arg1;
- (void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property(readonly, nonatomic) unsigned long long numberOfSides;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithMaskImage:(id)arg1 animationType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

