//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer
{
    struct RetainPtr<UITouch> _touch;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_processTouches:(id)arg1 state:(long long)arg2;
- (struct CGPoint)locationInView:(id)arg1;

@end

