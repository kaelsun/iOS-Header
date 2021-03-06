//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarTableViewDelegate-Protocol.h"
#import "CarTableViewFocusing-Protocol.h"
#import "ExtendedTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface CarTableViewController : UIViewController <ExtendedTableViewDelegate, CarTableViewDelegate, UITableViewDataSource, CarTableViewFocusing>
{
    _Bool _hasIdiom;
    long long _idiom;
    UIView *_lastDisplayedNoContentView;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)identifierForFocusItem:(id)arg1 withKey:(id)arg2;
- (id)focusItemForIdentifier:(id)arg1 withKey:(id)arg2;
- (id)firstFocusItemIfVisible;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateNoContentViewVisibility;
- (void)extendedTableViewDataSourceContentDidChange:(id)arg1;
- (id)noContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

