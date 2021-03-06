//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKMediaObject.h>

@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject
{
    PKPass *_pass;
    UIImage *_icon;
}

+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (_Bool)isPreviewable;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (int)mediaType;
- (id)passView;
- (_Bool)shouldShowDisclosure;
- (_Bool)shouldBeQuickLooked;
- (_Bool)shouldShowViewer;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)subtitle;
- (id)title;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)_supportsPassbook;
- (id)initWithTransfer:(id)arg1 isFromMe:(_Bool)arg2 suppressPreview:(_Bool)arg3 forceInlinePreview:(_Bool)arg4;

@end

