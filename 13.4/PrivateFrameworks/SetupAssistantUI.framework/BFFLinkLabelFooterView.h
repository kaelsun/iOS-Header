//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSMutableArray, NSString, UIColor, UILabel;

@interface BFFLinkLabelFooterView : UIView
{
    UILabel *_label;
    UILabel *_subtitleLabel;
    NSMutableArray *_linkHandlers;
    UIView *_topLine;
    _Bool _wantsSideBySideLayout;
    _Bool _wantsFromBottomLayout;
    double _flexibleHeight;
    NSAttributedString *_attributedSubtitleText;
    struct UIEdgeInsets _margins;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool wantsFromBottomLayout; // @synthesize wantsFromBottomLayout=_wantsFromBottomLayout;
@property(nonatomic) _Bool wantsSideBySideLayout; // @synthesize wantsSideBySideLayout=_wantsSideBySideLayout;
@property(retain, nonatomic) NSAttributedString *attributedSubtitleText; // @synthesize attributedSubtitleText=_attributedSubtitleText;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) double flexibleHeight; // @synthesize flexibleHeight=_flexibleHeight;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 shouldSetSize:(_Bool)arg2;
@property(retain, nonatomic) UIColor *topLineColor;
- (void)setEnabled:(_Bool)arg1;
- (unsigned long long)numberOfLinks;
- (void)removeAllLinks;
- (void)removeLinkAtIndex:(unsigned long long)arg1;
- (void)addLinkWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addLinkWithTitle:(id)arg1 textStyle:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSString *labelText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

