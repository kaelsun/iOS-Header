//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OABReaderState.h>

@class WBReader, WXReadState;

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderState : OABReaderState
{
    WBReader *mReader;
    int mCurrentTextType;
    WXReadState *mXmlDocumentState;
}

- (void).cxx_destruct;
@property(nonatomic) int currentTextType; // @synthesize currentTextType=mCurrentTextType;
@property(nonatomic) __weak WBReader *reader; // @synthesize reader=mReader;
- (id)xmlDrawingState;
- (id)initWithClient:(Class)arg1;

@end

