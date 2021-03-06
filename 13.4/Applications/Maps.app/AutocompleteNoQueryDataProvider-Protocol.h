//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol AutocompleteNoQueryDataProviderDelegate;

@protocol AutocompleteNoQueryDataProvider <NSObject>
@property(nonatomic) __weak id <AutocompleteNoQueryDataProviderDelegate> delegate;
@property(nonatomic) _Bool isFetchingDataComplete;
- (NSString *)title;
- (long long)type;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfObjects;
- (id)initWithDelegate:(id <AutocompleteNoQueryDataProviderDelegate>)arg1;

@optional
- (NSArray *)objectsForAnalytics;
- (void)fetchContent;
@end

