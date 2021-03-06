//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXUIContentViewControllerDelegate-Protocol.h"
#import "AXUIService-Protocol.h"
#import "Legacy_VOTUIItemChooserDelegate-Protocol.h"
#import "VOTUISystemPointerControllerDelegate-Protocol.h"

@class Legacy_VOTUIItemChooserController, NSMutableDictionary, NSString, VOTUIBrailleViewController, VOTUICaptionPanelViewController, VOTUICursorViewController, VOTUIMapsExplorationViewController, VOTUIRotorViewController, VOTUIScreenCurtainViewController, VOTUISwipeOrderViewController, VOTUISystemPointerController;

@interface VOTUIServer : NSObject <VOTUISystemPointerControllerDelegate, Legacy_VOTUIItemChooserDelegate, AXUIService, AXUIContentViewControllerDelegate>
{
    VOTUICursorViewController *_cursorViewController;
    VOTUISwipeOrderViewController *_swipeOrderViewController;
    VOTUIScreenCurtainViewController *_screenCurtainViewController;
    VOTUIBrailleViewController *_brailleViewController;
    VOTUIMapsExplorationViewController *_mapsExplorationViewController;
    VOTUICaptionPanelViewController *_captionPanelViewController;
    VOTUIRotorViewController *_rotorViewController;
    Legacy_VOTUIItemChooserController *_itemChooserController;
    NSString *_voiceOverWarningIdentifier;
    VOTUISystemPointerController *_systemPointerController;
    NSMutableDictionary *_systemPointerRegistrants;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *systemPointerRegistrants; // @synthesize systemPointerRegistrants=_systemPointerRegistrants;
@property(retain, nonatomic) VOTUISystemPointerController *systemPointerController; // @synthesize systemPointerController=_systemPointerController;
@property(retain, nonatomic) NSString *voiceOverWarningIdentifier; // @synthesize voiceOverWarningIdentifier=_voiceOverWarningIdentifier;
@property(retain, nonatomic) Legacy_VOTUIItemChooserController *itemChooserController; // @synthesize itemChooserController=_itemChooserController;
@property(retain, nonatomic) VOTUIRotorViewController *rotorViewController; // @synthesize rotorViewController=_rotorViewController;
@property(retain, nonatomic) VOTUICaptionPanelViewController *captionPanelViewController; // @synthesize captionPanelViewController=_captionPanelViewController;
@property(retain, nonatomic) VOTUIMapsExplorationViewController *mapsExplorationViewController; // @synthesize mapsExplorationViewController=_mapsExplorationViewController;
@property(retain, nonatomic) VOTUIBrailleViewController *brailleViewController; // @synthesize brailleViewController=_brailleViewController;
@property(retain, nonatomic) VOTUIScreenCurtainViewController *screenCurtainViewController; // @synthesize screenCurtainViewController=_screenCurtainViewController;
@property(retain, nonatomic) VOTUISwipeOrderViewController *swipeOrderViewController; // @synthesize swipeOrderViewController=_swipeOrderViewController;
@property(retain, nonatomic) VOTUICursorViewController *cursorViewController; // @synthesize cursorViewController=_cursorViewController;
- (_Bool)shouldPreventAutorotatingAllContentViewControllers;
- (double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(_Bool)arg2;
- (void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1;
- (void)_removeMapsExplorationViewController;
- (void)_removeBrailleViewController;
- (void)_addBrailleViewControllerWithOrientation:(long long)arg1 dotNumberPositions:(id)arg2 typingMode:(long long)arg3;
- (void)_addMapsExplorationViewController;
- (void)_removeRotorViewController;
- (void)_removeItemChooserController;
- (void)_removeSwipeOrderViewController;
- (void)_removeCursorViewController;
- (void)_removeScreenCurtainController;
- (void)_handleFlashBrailleInsertedTextMessage:(id)arg1;
- (void)_handleScreenCurtainEnabled:(_Bool)arg1;
- (void)_tvOS_handleDisplayItemChooser:(id)arg1;
- (void)closeItemChooser:(id)arg1;
- (void)_handleZoomFocusChangeNotification:(id)arg1;
- (void)_handleSendFocusChangeToZoom:(id)arg1;
- (void)_handleUpdateBrailleUIMessage:(id)arg1;
- (void)_handleHighlightBrailleDotsMessage:(id)arg1;
- (void)_handleHideBrailleUIMessage:(id)arg1;
- (void)_handleShowBrailleUIMessage:(id)arg1;
- (void)_handleHighlightMapsExplorationSegmentMessage:(id)arg1;
- (void)_handleUpdateMapsExplorationUIWithCurrentLocationMessage:(id)arg1;
- (void)_handleUpdateMapsExplorationCurrentCenter:(id)arg1;
- (void)_handleHideMapsExplorationUIMessage:(id)arg1;
- (void)_handleShowMapsExplorationUIMessage:(id)arg1;
- (id)_handleConvertFramesMessage:(id)arg1;
- (struct CGRect)_handleConvertFrameMessage:(id)arg1;
- (void)_handleUpdateVisualRotor:(id)arg1;
- (void)_handleHideVoiceOverWarning:(id)arg1;
- (void)_handleShowVoiceOverWarning:(id)arg1;
- (void)_handleSetSwipeOrderFramesMessage:(id)arg1;
- (void)_handleSetCursorFrameMessage:(id)arg1;
- (void)_removeCaptionPanelViewController;
- (void)_toggleVoiceOverCaptionPanelViewController;
- (void)_handleVoiceOverCaptionPanelEnabled:(id)arg1;
- (void)_handleRegisterForSystemPointerEventsWithMessage:(id)arg1 clientIdentifier:(id)arg2;
- (void)_handleMoveSystemPointerToPointWithMessage:(id)arg1;
- (void)systemPointerController:(id)arg1 pointerDidMoveToGlobalPoint:(struct CGPoint)arg2;
- (id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

