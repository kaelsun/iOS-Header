//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@class NSAttributedString, NSDictionary, NSString;

@interface WFValueTextAttachment : NSTextAttachment
{
    _Bool _selected;
    _Bool _requiresRedraw;
    NSAttributedString *_displayString;
    NSString *_stringValue;
    NSDictionary *_attributes;
    double _cornerRadius;
}

+ (id)humanReadableStringFromValueTextAttributedString:(id)arg1;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool requiresRedraw; // @synthesize requiresRedraw=_requiresRedraw;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *valueName;
@property(retain, nonatomic) id value;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) NSAttributedString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) struct UIEdgeInsets borderInsets;
@property(readonly, nonatomic) struct UIEdgeInsets textInsets;
- (id)initWithData:(id)arg1 ofType:(id)arg2;

@end

