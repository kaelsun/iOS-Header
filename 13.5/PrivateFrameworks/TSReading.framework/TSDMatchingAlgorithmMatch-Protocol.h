//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TSDMatchingAlgorithmMatch;

@protocol TSDMatchingAlgorithmMatch
@property(readonly, nonatomic) id outgoingMatchObject;
@property(readonly, nonatomic) id incomingMatchObject;
@property(readonly, nonatomic) long long matchCost;
- (_Bool)conflictsWithMatch:(id <TSDMatchingAlgorithmMatch>)arg1;
- (long long)compareToMatch:(id <TSDMatchingAlgorithmMatch>)arg1;
@end

