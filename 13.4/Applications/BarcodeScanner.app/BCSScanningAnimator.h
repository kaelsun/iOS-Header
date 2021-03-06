//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCSDissolveEffectView, BCSImageQuad, UIImageView, UIView, UIVisualEffectView;

@interface BCSScanningAnimator : NSObject
{
    UIVisualEffectView *_blurView;
    BCSDissolveEffectView *_platterView;
    UIView *_focusIndicator;
    BCSImageQuad *_imageQuad;
    UIImageView *_targetQRImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *targetQRImage; // @synthesize targetQRImage=_targetQRImage;
@property(retain, nonatomic) BCSImageQuad *imageQuad; // @synthesize imageQuad=_imageQuad;
@property(retain, nonatomic) UIView *focusIndicator; // @synthesize focusIndicator=_focusIndicator;
- (void)reset;
- (void)animatePopWithAppImageBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animatePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performMeshTransform:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGPoint)_qrImagePopScaleFactor;
- (struct CGRect)_platterInitialFrame;
- (struct CGRect)_restRect;
- (struct CGPoint)_restPosition;
- (id)_meshTransform:(_Bool)arg1;
- (id)_perspectiveCorrectedImage;

@end

