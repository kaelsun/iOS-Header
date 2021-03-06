//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/IKAppKeyboardDelegate-Protocol.h>
#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/UISearchResultsUpdating-Protocol.h>
#import <TVMLKit/_TVStackCollectionViewControllerDelegate-Protocol.h>

@class IKAppKeyboard, IKTextFieldElement, IKViewElement, NSString, UIActivityIndicatorView, UISearchController, UIView, _TVStackCollectionViewController;

@interface _TVSearchTemplateController_iOS : _TVBgImageLoadingViewController <UISearchResultsUpdating, IKAppKeyboardDelegate, _TVStackCollectionViewControllerDelegate, TVAppTemplateImpressionable>
{
    UIView *_nonResultsView;
    _TVStackCollectionViewController *_resultsViewController;
    UISearchController *_searchController;
    IKTextFieldElement *_searchFieldElement;
    IKAppKeyboard *_ikKeyboard;
    IKViewElement *_nonResultsElement;
    IKViewElement *_collectionListElement;
    struct CGRect _keyboardFrame;
    double _impressionThreshold;
    UIActivityIndicatorView *_spinner;
    UIView *_originalSearchFieldRightView;
    long long _originalSearchFieldRightViewMode;
    IKViewElement *_viewElement;
}

@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_recordImpressionsForVisibleView;
- (void)_cancelImpressionsUpdate;
- (void)_updateImpressions;
- (void)stackCollectionViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (id)_sanitizedText;
- (_Bool)_isAtWordEnd;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_setNonResultsView:(id)arg1;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

