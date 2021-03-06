//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUILeadingViewController.h>

#import <SearchUI/SearchUIHomeScreenEngagementDelegate-Protocol.h>

@class NSString, SearchUIHomeScreenAppIconView;

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>
{
}

+ (_Bool)supportsRowModel:(id)arg1;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;
- (void)dismissIfNecessaryForIconDrag;
- (void)didEngageResult:(id)arg1;
- (_Bool)shouldVerticallyCenter;
- (id)setupView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SearchUIHomeScreenAppIconView *view; // @dynamic view;

@end

