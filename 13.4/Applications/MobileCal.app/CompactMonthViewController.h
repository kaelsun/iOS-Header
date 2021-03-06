//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MonthViewController.h"

@interface CompactMonthViewController : MonthViewController
{
    _Bool _applicationResuming;
    _Bool _needsPaletteLayout;
}

+ (double)topOfMonthNameLabelToGrayLineDistanceForWindowSize:(struct CGSize)arg1;
+ (id)monthNameFont;
+ (id)dividedModeBackgroundColor;
+ (double)scrubbingMinimumPressDuration;
- (void)contentSizeCategoryChanged;
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;
- (void)setShouldRespondToApplicationDidBecomeActiveStateChange:(_Bool)arg1;
- (void)_updateDayHeaderFrames;
- (double)palleteViewXOffset;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updatePalette:(id)arg1;
- (void)weekNumbersPrefChanged;

@end

