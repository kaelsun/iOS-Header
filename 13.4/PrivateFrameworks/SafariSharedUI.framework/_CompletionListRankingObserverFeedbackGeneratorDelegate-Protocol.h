//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@protocol WBSCompletionListItem, _CompletionListRankingObserverFeedbackGenerator;

@protocol _CompletionListRankingObserverFeedbackGeneratorDelegate <NSObject>

@optional
- (unsigned long long)completionListRankingObserverFeedbackGenerator:(id <_CompletionListRankingObserverFeedbackGenerator>)arg1 frequentlyVisitedSitesIndexOfItem:(id <WBSCompletionListItem>)arg2 hidingItem:(id <WBSCompletionListItem>)arg3;
@end

