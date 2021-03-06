//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface MapsCircleProgressView : UIView
{
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_progressLayer;
    UIImageView *_imageView;
    CAShapeLayer *_indeterminateLayer;
    _Bool _indeterminate;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_startIndeterminateAnimation;
@property(retain, nonatomic) UIImage *image;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

