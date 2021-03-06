//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

__attribute__((visibility("hidden")))
@interface CKQuestionAcknowledgmentGlyphView : CKAcknowledgmentGlyphView
{
    CKAcknowledgmentGlyphImageView *_glyph;
    CKAcknowledgmentGlyphImageView *_dot;
}

@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *dot; // @synthesize dot=_dot;
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *glyph; // @synthesize glyph=_glyph;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGPoint)glyphOffset;
- (long long)acknowledgmentType;
- (void)setGlyphColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end

