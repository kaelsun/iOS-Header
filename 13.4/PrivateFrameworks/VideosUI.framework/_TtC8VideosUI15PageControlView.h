//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/VUIPageControlView-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI15PageControlView : UIView <VUIPageControlView>
{
    // Error parsing type: , name: currentPageDidChange
    // Error parsing type: , name: capMargin
    // Error parsing type: , name: pageControlBackgroundColor
    // Error parsing type: , name: currentPageIndicatorTintColor
    // Error parsing type: , name: pageIndicatorTintColor
    // Error parsing type: , name: pageControlType
    // Error parsing type: , name: adaptivePageControlView
    // Error parsing type: , name: roundedPageControlView
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addNumberOfPages:(long long)arg1;
- (void)moveToPage:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) long long numberOfPages;
@property(nonatomic, copy) CDUnknownBlockType currentPageDidChange;

@end

