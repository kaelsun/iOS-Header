//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedTransformationSort.h>

@interface FCFeedTransformationSortBlock : FCFeedTransformationSort
{
    CDUnknownBlockType _sortBlock;
}

+ (id)transformationWithSortBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sortBlock; // @synthesize sortBlock=_sortBlock;
- (id)transformFeedItems:(id)arg1;

@end

