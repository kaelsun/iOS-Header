//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKInteractiveChartAnnotationView, NSArray, NSDate, NSMutableArray, UIView;
@protocol HKLollipopDelegate;

@interface HKLollipopController : NSObject
{
    HKInteractiveChartAnnotationView *_annotationView;
    id <HKLollipopDelegate> _delegate;
    UIView *_parentView;
    UIView *_fieldView;
    NSMutableArray *_extensionViews;
    NSArray *_lastSelectionLocation;
    NSDate *_lastFirstLollipopDate;
}

+ (_Bool)pointSelectionContextsHaveUserInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastFirstLollipopDate; // @synthesize lastFirstLollipopDate=_lastFirstLollipopDate;
@property(copy, nonatomic) NSArray *lastSelectionLocation; // @synthesize lastSelectionLocation=_lastSelectionLocation;
@property(retain, nonatomic) NSMutableArray *extensionViews; // @synthesize extensionViews=_extensionViews;
@property(retain, nonatomic) UIView *fieldView; // @synthesize fieldView=_fieldView;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(readonly, nonatomic) __weak id <HKLollipopDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HKInteractiveChartAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void)_setAlpha:(double)arg1;
- (void)_setHidden:(_Bool)arg1;
- (void)_bringViewsToFront;
- (id)firstLollipopDate;
- (void)setInvisibleAnimated:(_Bool)arg1;
- (void)setVisibleWithRect:(struct CGRect)arg1 pointContexts:(id)arg2 animated:(_Bool)arg3;
- (_Bool)isVisible;
- (void)_rebuildExtensionsWithStickLocations:(id)arg1;
- (void)_positionAnnotationViewWithStickLocations:(id)arg1;
- (id)_stickLocationsFromPointContexts:(id)arg1;
- (_Bool)_selectionHasMoved:(id)arg1;
- (void)updateWithPointContexts:(id)arg1;
- (void)_setExtensionViewBackgrounds;
- (double)_lollipopExtensionWidth;
- (double)_lollipopExtensionLength;
- (id)_lollipopExtensionColor;
- (id)_lollipopAnnotationColor;
- (id)_lollipopFieldColor;
- (id)initWithAnnotationDataSource:(id)arg1 parentView:(id)arg2 delegate:(id)arg3;

@end

