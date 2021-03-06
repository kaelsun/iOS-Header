//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class TLKMultilineText;

@interface TLKTextView : UITextView
{
    _Bool _automaticUrlification;
    unsigned long long _prominence;
    TLKMultilineText *_multilineText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool automaticUrlification; // @synthesize automaticUrlification=_automaticUrlification;
@property(retain, nonatomic) TLKMultilineText *multilineText; // @synthesize multilineText=_multilineText;
@property(nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_usesNonVibrantAppearance;
- (void)updateAttributedString;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)urlify;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setText:(id)arg1;
- (id)init;

@end

