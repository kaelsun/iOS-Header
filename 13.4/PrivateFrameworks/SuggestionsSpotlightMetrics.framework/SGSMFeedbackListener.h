//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SuggestionsSpotlightMetrics/SFFeedbackListener-Protocol.h>

@class NSCache, NSString, SGSMMutableSearchState;
@protocol SGSuggestionsServiceEventsProtocol;

@interface SGSMFeedbackListener : NSObject <SFFeedbackListener>
{
    SGSMMutableSearchState *_searchState;
    SGSMMutableSearchState *_previousState;
    id <SGSuggestionsServiceEventsProtocol> _suggestionsService;
    NSCache *_eventLastInteractionTime;
}

- (void).cxx_destruct;
- (void)searchViewDidDisappear:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (id)_eventIdentifierFromSearchResult:(id)arg1;
- (void)_resetState;
- (void)_restoreStateIfUnset;
- (void)_saveAndUnsetState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

