//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NSString, WKFullscreenAnimationController;

__attribute__((visibility("hidden")))
@interface WKFullScreenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning>
{
    struct RetainPtr<WKFullscreenAnimationController> _animator;
    struct RetainPtr<id<UIViewControllerContextTransitioning>> _context;
    struct CGPoint _anchor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1 withScale:(double)arg2 andTranslation:(struct CGSize)arg3;
- (void)updateInteractiveTransition:(double)arg1 withTranslation:(struct CGSize)arg2;
- (void)startInteractiveTransition:(id)arg1;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;
@property(readonly, nonatomic) WKFullscreenAnimationController *animator;
- (id)initWithAnimator:(id)arg1 anchor:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

