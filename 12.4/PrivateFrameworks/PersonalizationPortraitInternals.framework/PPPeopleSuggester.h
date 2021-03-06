//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPContactSuggester.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface PPPeopleSuggester : PPContactSuggester
{
    CDUnknownBlockType _mockBlock;
    NSObject<OS_dispatch_source> *_timer;
    unsigned char _numberOfContactsToSuggest;
}

- (void).cxx_destruct;
- (void)waitForData;
- (void)_refreshPeopleSuggestionsAndRetryIfNoResults:(_Bool)arg1;
- (void)_processPeopleSuggestions:(id)arg1 favorites:(id)arg2 doRetry:(_Bool)arg3;
- (id)_makeDuetPeopleSuggester;
- (void)clearCaches;
- (void)clearCachesWithoutRefreshing;
- (void)setNumberOfContactsToSuggest:(unsigned char)arg1;
- (id)initWithNumberOfContactsToSuggest:(unsigned char)arg1;
- (unsigned char)numberOfContactsToSuggest;
- (void)refreshMockPeopleSuggestions;
- (id)initWithMock:(CDUnknownBlockType)arg1;

@end

