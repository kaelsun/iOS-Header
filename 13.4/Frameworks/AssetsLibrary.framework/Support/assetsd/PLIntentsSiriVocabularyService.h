//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PLSiriVocabularyService-Protocol.h"

@class INVocabulary, NSString;

@interface PLIntentsSiriVocabularyService : NSObject <PLSiriVocabularyService>
{
    INVocabulary *_vocabulary;
}

+ (id)sharedSiriVocabularyService;
- (void).cxx_destruct;
- (void)setVocabularyForContactNames:(id)arg1;
- (void)setVocabularyForAlbumNames:(id)arg1;
- (id)initWithVocabulary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

