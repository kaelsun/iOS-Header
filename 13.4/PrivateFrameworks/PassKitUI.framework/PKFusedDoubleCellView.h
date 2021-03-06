//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPaymentDashboardCellActionHandleable-Protocol.h>

@class NSString, PKPaymentPass, UIColor, UIImageView, UILabel;
@protocol PKAccessibleLayoutObserverDelegate;

@interface PKFusedDoubleCellView : UIView <PKPaymentDashboardCellActionHandleable>
{
    UIView *_separatorView;
    UIImageView *_disclosureView;
    double _topPadding;
    double _middlePadding;
    _Bool _isTemplateLayout;
    long long _accessibleLayout;
    id <PKAccessibleLayoutObserverDelegate> _accessibleLayoutObserverDelegate;
    UILabel *_leftTitleView;
    UILabel *_leftDetailView;
    UILabel *_leftSubDetailView;
    UILabel *_rightTitleView;
    UILabel *_rightDetailView;
    UILabel *_rightSubDetailView;
    unsigned long long _deferUpdateCounter;
    _Bool _animated;
    _Bool _enableDisclosure;
    PKPaymentPass *_pass;
    UIColor *_leftTitleColor;
    UIColor *_leftDetailColor;
    UIColor *_leftSubDetailColor;
    UIColor *_rightTitleColor;
    UIColor *_rightDetailColor;
    UIColor *_rightSubDetailColor;
    long long _leftTitleLineBreakMode;
    long long _leftDetailLineBreakMode;
    long long _leftSubDetailLineBreakMode;
    long long _rightTitleLineBreakMode;
    long long _rightDetailLineBreakMode;
    long long _rightSubDetailLineBreakMode;
    NSString *_leftTitle;
    NSString *_leftDetail;
    NSString *_leftSubDetail;
    NSString *_rightTitle;
    NSString *_rightDetail;
    NSString *_rightSubDetail;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *rightSubDetail; // @synthesize rightSubDetail=_rightSubDetail;
@property(copy, nonatomic) NSString *rightDetail; // @synthesize rightDetail=_rightDetail;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) NSString *leftSubDetail; // @synthesize leftSubDetail=_leftSubDetail;
@property(copy, nonatomic) NSString *leftDetail; // @synthesize leftDetail=_leftDetail;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(nonatomic) long long rightSubDetailLineBreakMode; // @synthesize rightSubDetailLineBreakMode=_rightSubDetailLineBreakMode;
@property(nonatomic) long long rightDetailLineBreakMode; // @synthesize rightDetailLineBreakMode=_rightDetailLineBreakMode;
@property(nonatomic) long long rightTitleLineBreakMode; // @synthesize rightTitleLineBreakMode=_rightTitleLineBreakMode;
@property(nonatomic) long long leftSubDetailLineBreakMode; // @synthesize leftSubDetailLineBreakMode=_leftSubDetailLineBreakMode;
@property(nonatomic) long long leftDetailLineBreakMode; // @synthesize leftDetailLineBreakMode=_leftDetailLineBreakMode;
@property(nonatomic) long long leftTitleLineBreakMode; // @synthesize leftTitleLineBreakMode=_leftTitleLineBreakMode;
@property(copy, nonatomic) UIColor *rightSubDetailColor; // @synthesize rightSubDetailColor=_rightSubDetailColor;
@property(copy, nonatomic) UIColor *rightDetailColor; // @synthesize rightDetailColor=_rightDetailColor;
@property(copy, nonatomic) UIColor *rightTitleColor; // @synthesize rightTitleColor=_rightTitleColor;
@property(copy, nonatomic) UIColor *leftSubDetailColor; // @synthesize leftSubDetailColor=_leftSubDetailColor;
@property(copy, nonatomic) UIColor *leftDetailColor; // @synthesize leftDetailColor=_leftDetailColor;
@property(copy, nonatomic) UIColor *leftTitleColor; // @synthesize leftTitleColor=_leftTitleColor;
@property(copy, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(nonatomic) _Bool enableDisclosure; // @synthesize enableDisclosure=_enableDisclosure;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateContent:(_Bool)arg1;
- (void)endUpdates:(_Bool)arg1;
- (void)beginUpdates;
- (_Bool)_rightNeedsThirdLine;
- (_Bool)_leftNeedsThirdLine;
- (void)layoutIfNeededAnimated:(_Bool)arg1;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_subDetailFont;
- (id)_detailFont;
- (id)_titleFont;
- (void)_setupViews;
- (void)_performInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

