//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MapsAutoLayoutContext, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface InlineTopBarTitleView : UIView
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIView *_containerView;
    MapsAutoLayoutContext *_layoutContext;
    _Bool _dimmed;
    _Bool _darkUI;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic, getter=isUIDark) _Bool darkUI; // @synthesize darkUI=_darkUI;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primaryText;
- (void)updateConstraints;
- (void)_updateStyling;
- (id)initWithFrame:(struct CGRect)arg1;

@end

