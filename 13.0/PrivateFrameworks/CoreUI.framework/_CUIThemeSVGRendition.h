//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface _CUIThemeSVGRendition : CUIThemeRendition
{
    struct CGSVGDocument *_svgDocument;
    NSData *_fileData;
    unsigned int _standardPointSize;
    NSArray *_vectorSizes;
    double _baseline;
    double _capline;
    CDStruct_3c058996 _alignmentRectInsets;
    _Bool _isAlignmentRect;
}

- (CDStruct_3c058996)vectorGlyphAlignmentRectInsets;
- (double)vectorGlyphReferencePointSize;
- (double)vectorGlyphCapLine;
- (double)vectorGlyphBaseline;
- (id)vectorGlyphAvailableSizes;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader *)arg1;
- (struct CGSVGDocument *)svgDocument;
- (id)rawData;
- (id)metrics;
- (int)pixelFormat;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end

