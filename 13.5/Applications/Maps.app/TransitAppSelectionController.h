//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "TransitAppSelectionCellDelegate-Protocol.h"
#import "TransitAppSuggestionProviderDelegate-Protocol.h"

@class GEOComposedWaypoint, NSArray, NSDictionary, NSString, SKStoreProductViewController, TransitAppSelectionLoadingCell, TransitAppSuggestionProvider;
@protocol MKLocationManagerOperation, TransitAppSelectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface TransitAppSelectionController : UITableViewController <SKStoreProductViewControllerDelegate, TransitAppSelectionCellDelegate, TransitAppSuggestionProviderDelegate>
{
    _Bool _noAppSuggestions;
    _Bool _resolvedEndpoints;
    id <TransitAppSelectionControllerDelegate> _delegate;
    long long _transportType;
    NSArray *_suggestedStoreAppIds;
    NSDictionary *_suggestedStoreAppData;
    NSArray *_suggestedInstalledApps;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    id <MKLocationManagerOperation> _locationLookupOperation;
    SKStoreProductViewController *_storeViewController;
    TransitAppSuggestionProvider *_suggestionProvider;
    TransitAppSelectionLoadingCell *_loadingCell;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool resolvedEndpoints; // @synthesize resolvedEndpoints=_resolvedEndpoints;
@property(nonatomic) _Bool noAppSuggestions; // @synthesize noAppSuggestions=_noAppSuggestions;
@property(retain, nonatomic) TransitAppSelectionLoadingCell *loadingCell; // @synthesize loadingCell=_loadingCell;
@property(retain, nonatomic) TransitAppSuggestionProvider *suggestionProvider; // @synthesize suggestionProvider=_suggestionProvider;
@property(retain, nonatomic) SKStoreProductViewController *storeViewController; // @synthesize storeViewController=_storeViewController;
@property(retain, nonatomic) id <MKLocationManagerOperation> locationLookupOperation; // @synthesize locationLookupOperation=_locationLookupOperation;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOComposedWaypoint *source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray *suggestedInstalledApps; // @synthesize suggestedInstalledApps=_suggestedInstalledApps;
@property(retain, nonatomic) NSDictionary *suggestedStoreAppData; // @synthesize suggestedStoreAppData=_suggestedStoreAppData;
@property(retain, nonatomic) NSArray *suggestedStoreAppIds; // @synthesize suggestedStoreAppIds=_suggestedStoreAppIds;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) __weak id <TransitAppSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)transitAppSelectionCellRoutePressed:(id)arg1;
- (void)_useInstalledApp:(id)arg1 toRouteFromSource:(id)arg2 toDestination:(id)arg3;
- (id)_sanitizedMapItemFromWaypoint:(id)arg1;
- (void)transitAppSuggestionProvider:(id)arg1 didSuggestInstalledApps:(id)arg2;
- (void)transitAppSuggestionProvider:(id)arg1 didFailToSuggestStoreApps:(id)arg2;
- (void)transitAppSuggestionProvider:(id)arg1 didSuggestStoreApps:(id)arg2 withDataDictionary:(id)arg3;
- (void)_reloadSection:(unsigned long long)arg1;
- (void)_cancelTransitSelection;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_appDataForStoreRow:(unsigned long long)arg1;
- (void)reset;
- (void)_handleSearchResultError:(_Bool)arg1 error:(id)arg2;
- (_Bool)_updateSuggestions;
- (void)updateForWaypointSet:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithTransportType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

