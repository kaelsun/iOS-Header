//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "InfoCardViewController.h"

#import "CNContactViewControllerDelegate-Protocol.h"
#import "ContaineeHeaderHeightProvider-Protocol.h"
#import "ExtensionFlowDelegate-Protocol.h"
#import "GEOLogContextDelegate-Protocol.h"
#import "MKMuninViewProvider-Protocol.h"
#import "PlaceCardActionButtonControllingDelegate-Protocol.h"
#import "RelatedSearchSuggestionViewControllerDelegate-Protocol.h"
#import "_MKPlaceViewControllerDelegate-Protocol.h"

@class DragAndDropPreview, MKMuninView, MSPQuery, NSArray, NSMapTable, NSString, PlaceCardItem, RelatedSearchSuggestionViewController, _MKPlaceViewController;
@protocol PlaceCardActionButtonControlling, PlaceCardViewControllerDelegate, UIDragSession;

__attribute__((visibility("hidden")))
@interface PlaceCardViewController : InfoCardViewController <_MKPlaceViewControllerDelegate, PlaceCardActionButtonControllingDelegate, ExtensionFlowDelegate, CNContactViewControllerDelegate, GEOLogContextDelegate, RelatedSearchSuggestionViewControllerDelegate, ContaineeHeaderHeightProvider, MKMuninViewProvider>
{
    _MKPlaceViewController *_placeViewController;
    _Bool _contentNeedsUpdating;
    _Bool _shouldFetchDraggableViews;
    _Bool _didInsertInHistory;
    _Bool _shouldInsertInHistory;
    _Bool _refinementFailed;
    _Bool _originalContent;
    id <PlaceCardActionButtonControlling> _actionButtonController;
    RelatedSearchSuggestionViewController *_suggestionViewController;
    MSPQuery *_placeFavoritesSearchResultsQuery;
    NSMapTable *_draggableContentInteractions;
    DragAndDropPreview *_previewView;
    id <UIDragSession> _currentDragSession;
    NSArray *_shortcuts;
    _Bool _isPresentedInSearchAlongTheRoute;
    _Bool _shouldDisplaySecondaryActionWhenReady;
    _Bool _isMapItemInFavorites;
    PlaceCardItem *_placeCardItem;
    long long _excludedContent;
    id <PlaceCardViewControllerDelegate> _placeCardDelegate;
    NSArray *_draggableContent;
}

+ (_Bool)shouldInsertRecentPOIForRouting;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *draggableContent; // @synthesize draggableContent=_draggableContent;
@property(nonatomic) _Bool isMapItemInFavorites; // @synthesize isMapItemInFavorites=_isMapItemInFavorites;
@property(nonatomic) _Bool shouldDisplaySecondaryActionWhenReady; // @synthesize shouldDisplaySecondaryActionWhenReady=_shouldDisplaySecondaryActionWhenReady;
@property(nonatomic) _Bool isPresentedInSearchAlongTheRoute; // @synthesize isPresentedInSearchAlongTheRoute=_isPresentedInSearchAlongTheRoute;
@property(nonatomic) __weak id <PlaceCardViewControllerDelegate> placeCardDelegate; // @synthesize placeCardDelegate=_placeCardDelegate;
@property(nonatomic) long long excludedContent; // @synthesize excludedContent=_excludedContent;
@property(readonly, nonatomic) PlaceCardItem *placeCardItem; // @synthesize placeCardItem=_placeCardItem;
- (void)_updateSuggestionVisibility;
- (void)_setupConstraintsForSuggestionView:(id)arg1;
- (void)_searchWithSuggestion:(id)arg1;
- (void)_initSuggestion;
- (id)suggestionViewController;
- (void)relatedSearchSuggestionViewController:(id)arg1 didDismissWithReason:(unsigned long long)arg2;
- (void)relatedSearchSuggestionViewControllerDidTapActionButton:(id)arg1;
- (void)relatedSearchSuggestionViewControllerDidScrollRight:(id)arg1;
- (void)relatedSearchSuggestionViewControllerDidScrollLeft:(id)arg1;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)dragAndDropPreviewDidUpdate:(id)arg1;
- (id)targetedDragPreviewForInteraction:(id)arg1;
- (void)updatePreviewDrag;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)updateActionButtonWithTitle:(id)arg1 subtitle:(id)arg2 canPresentFlow:(_Bool)arg3;
- (void)presentExtensionFlowController:(id)arg1;
- (void)appStoreItemSelected:(id)arg1;
- (void)extensionContentDidChange;
- (_Bool)isMeCard;
- (_Bool)isContact;
- (void)dismissContactsViewController;
- (void)displaySecondaryAction;
- (void)viewContact;
- (void)refreshSecondaryButton;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)placeViewControllerLinkedServicesDidTapHeaderButton:(id)arg1;
- (void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (void)placeViewControllerDidSelectShowBrandCard:(id)arg1;
- (void)placeViewController:(id)arg1 didSelectParent:(id)arg2;
- (void)placeViewController:(id)arg1 didSelectSearchCategory:(id)arg2;
- (void)placeViewControllerDidSelectRemoveMarker:(id)arg1;
- (void)placeViewControllerDidSelectDisplayedAddress:(id)arg1;
- (_Bool)shouldMoveMuninStorefrontViewForPlaceViewController:(id)arg1;
- (void)placeViewController:(id)arg1 enterMuninForMapItem:(id)arg2 muninView:(id)arg3;
- (void)placeViewControllerDidSelectFlyover:(id)arg1;
- (void)placeViewControllerDidSelectAddAPlace:(id)arg1;
- (long long)_overriddenUserInterfaceStyle;
- (void)placeViewControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2;
- (void)placeViewController:(id)arg1 showTransitIncidents:(id)arg2;
- (void)placeViewController:(id)arg1 didSelectTransitLine:(id)arg2;
- (_Bool)placeViewController:(id)arg1 canSelectDepartureSequence:(id)arg2 mapItem:(id)arg3;
- (void)placeViewController:(id)arg1 didSelectDepartureSequence:(id)arg2 mapItem:(id)arg3;
- (int)mapTypeForPlaceViewController:(id)arg1;
- (void)placeViewController:(id)arg1 refineLocationForPlaceItem:(id)arg2;
- (void)placeViewController:(id)arg1 changeAddressForPlaceItem:(id)arg2;
- (void)placeViewController:(id)arg1 removeShortcutForPlaceItem:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)placeViewController:(id)arg1 addShortcutForPlaceItem:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)placeViewController:(id)arg1 hasShortcutForPlaceItem:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)_shortcutForPlaceItem:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)_fetchShortcuts:(CDUnknownBlockType)arg1;
- (void)_resetShortcutsCache;
- (void)_touchMapsSuggestionsEngine;
- (id)shortcutManager;
- (void)placeViewController:(id)arg1 showRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5;
- (id)placeViewController:(id)arg1 viewsForMapItems:(id)arg2 prefersAddressOverCategory:(_Bool)arg3;
- (void)placeViewController:(id)arg1 selectCollectionIdentifier:(id)arg2;
- (void)placeViewController:(id)arg1 addPlaceItemToCollection:(id)arg2 sourceView:(id)arg3 result:(CDUnknownBlockType)arg4;
- (id)placeViewController:(id)arg1 collectionViewsForPlaceItem:(id)arg2;
- (void)placeViewControllerDidUpdateHeight:(id)arg1;
- (void)_routeToCurrentSearchResultWithTransportType:(long long)arg1;
- (long long)overriddenInterfaceStyleForPlaceViewControllerSubviews:(id)arg1;
- (id)activityViewControllerForPlaceViewController:(id)arg1;
- (void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(id)arg2;
- (void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
- (id)traitsForPlaceViewController:(id)arg1;
- (double)placeViewControllerPlaceCardHeaderTitleTrailingConstant:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)initPlaceCard;
- (double)containeeHeaderHeight;
- (double)heightForLayout:(unsigned long long)arg1;
- (void)didScrollPastTransition;
- (void)insertInHistory;
- (void)placeCardItemMapItemDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) MKMuninView *muninView;
- (void)setPlaceCardItem:(id)arg1;
- (void)setPlaceCardItem:(id)arg1 withHistory:(_Bool)arg2;
- (void)updateHeaderTitle:(id)arg1;
- (void)_carryOverTransitDisplayInformationFromCurrentItemToNewFetchedResult:(id)arg1;
- (void)updateContent;
- (void)hideHeader;
- (void)setNeedsContentUpdate;
- (void)resetState;
- (double)headerSecondaryNameLabelPadding;
- (_Bool)updateHeightConstraintWithValue:(double)arg1;
- (void)willChangeLayout:(unsigned long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithVisualEffectDisabled:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

