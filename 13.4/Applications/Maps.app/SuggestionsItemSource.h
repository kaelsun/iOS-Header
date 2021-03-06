//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PersonalizedItemSource.h"

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SuggestionsItemSource : PersonalizedItemSource
{
    NSArray *_suggestions;
    NSArray *_items;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (long long)itemSourceSubtypeForSuggestionsEntryType:(long long)arg1;
@property(copy, nonatomic) NSArray *suggestions;
- (id)allItems;
- (id)init;

@end

