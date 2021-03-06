//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString, SKUIReviewConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIPostRatingOperation : ISOperation
{
    NSDictionary *_responseDictionary;
    NSString *_itemID;
    long long _rating;
    SKUIReviewConfiguration *_reviewConfiguration;
}

- (void).cxx_destruct;
- (void)run;
@property(readonly) NSDictionary *responseDictionary;
- (id)initWithRating:(long long)arg1 forItemID:(id)arg2 reviewConfiguration:(id)arg3;

@end

