//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <PencilKit/PKInkToolButton-Protocol.h>

@class NSString, UIColor, UIImageView, _PKInkToolOpacityLabel;

@interface _PKEmbossedInkToolButton : UIButton <PKInkToolButton>
{
    _Bool _isUsedOnDarkBackground;
    NSString *_identifier;
    UIColor *_color;
    unsigned long long _sizeState;
    unsigned long long _attributeSet;
    UIImageView *_toolDockMaskImageView;
    UIImageView *_toolBaseImageView;
    UIImageView *_nibImageView;
    UIImageView *_nibEmbossImageView;
    _PKInkToolOpacityLabel *_opacityLabel;
}

+ (id)imageNameForIdentifier:(id)arg1;
+ (id)imageNameForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2 imageType:(id)arg3;
+ (struct CGSize)_toolBaseImageSizeForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2;
+ (id)buttonWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
@property(retain, nonatomic) _PKInkToolOpacityLabel *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
@property(retain, nonatomic) UIImageView *nibEmbossImageView; // @synthesize nibEmbossImageView=_nibEmbossImageView;
@property(retain, nonatomic) UIImageView *nibImageView; // @synthesize nibImageView=_nibImageView;
@property(retain, nonatomic) UIImageView *toolBaseImageView; // @synthesize toolBaseImageView=_toolBaseImageView;
@property(retain, nonatomic) UIImageView *toolDockMaskImageView; // @synthesize toolDockMaskImageView=_toolDockMaskImageView;
@property(nonatomic) unsigned long long attributeSet; // @synthesize attributeSet=_attributeSet;
@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(nonatomic) unsigned long long sizeState; // @synthesize sizeState=_sizeState;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (double)embossAlphaForColor:(id)arg1;
- (id)nibEmbossImageName;
- (id)nibImageName;
- (id)toolDockMaskImageName;
- (id)toolBaseImageName;
- (void)setColor:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 sizeState:(unsigned long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;

@end

