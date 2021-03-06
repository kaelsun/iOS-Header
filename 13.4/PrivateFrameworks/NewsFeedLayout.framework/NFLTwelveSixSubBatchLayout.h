//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLTwelveSixSubBatchLayout : NFLSubBatchLayout
{
    NFLSingleComponentLayout *_largeComponent;
    NFLPairSubBatchLayout *_topPairComponent;
    NFLPairSubBatchLayout *_middlePairComponent;
    NFLPairSubBatchLayout *_bottomPairComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFLPairSubBatchLayout *bottomPairComponent; // @synthesize bottomPairComponent=_bottomPairComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *middlePairComponent; // @synthesize middlePairComponent=_middlePairComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *topPairComponent; // @synthesize topPairComponent=_topPairComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *largeComponent; // @synthesize largeComponent=_largeComponent;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (double)rank;
- (_Bool)isValid;

@end

