//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFObject-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFPalette : NSObject <MFObject>
{
    NSMutableArray *m_colours;
}

+ (id)paletteWithColours:(id)arg1;
- (void).cxx_destruct;
- (id)getColour:(int)arg1;
- (_Bool)resize:(int)arg1;
- (_Bool)setEntries:(int)arg1 in_colours:(id)arg2;
- (int)selectInto:(id)arg1;
- (id)initWithColours:(id)arg1;
- (id)init;

@end

