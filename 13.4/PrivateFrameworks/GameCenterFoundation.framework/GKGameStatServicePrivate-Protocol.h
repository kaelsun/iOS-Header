//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKGameStatService-Protocol.h>

@class GKGameDescriptor, GKLeaderboardScoreRequest, NSArray;

@protocol GKGameStatServicePrivate <GKGameStatService>
- (oneway void)getHypotheticalLeaderboardRanksForScores:(NSArray *)arg1 forGameDescriptor:(GKGameDescriptor *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getAchievementLeaderboardForRequest:(GKLeaderboardScoreRequest *)arg1 handler:(void (^)(GKLeaderboardInternal *, NSError *))arg2;
@end

