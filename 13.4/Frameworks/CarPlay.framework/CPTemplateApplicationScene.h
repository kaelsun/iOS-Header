//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScene.h>

#import <CarPlay/CPWindowProviding-Protocol.h>
#import <CarPlay/UICoordinateSpace-Protocol.h>
#import <CarPlay/_UIContextBinderContextCreationPolicyHolding-Protocol.h>
#import <CarPlay/_UISceneUIWindowHosting-Protocol.h>

@class CPInterfaceController, CPWindow, NSString, UIScreen, UITraitCollection, _UIContextBinder;
@protocol CPTemplateApplicationSceneDelegate, NSObject, UICoordinateSpace;

@interface CPTemplateApplicationScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace, CPWindowProviding>
{
    id <NSObject> _sceneWillConnectObserver;
    id <NSObject> _didFinishLaunchingObserver;
    _Bool _sceneWillConnect;
    _UIContextBinder *_contextBinder;
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    long long _screenRequestedOverscanCompensation;
    CPWindow *_carWindow;
    CPInterfaceController *_interfaceController;
}

+ (id)activeTemplateScene;
+ (_Bool)_hostsWindows;
- (void).cxx_destruct;
@property(readonly, nonatomic) CPInterfaceController *interfaceController; // @synthesize interfaceController=_interfaceController;
@property(retain, nonatomic) CPWindow *carWindow; // @synthesize carWindow=_carWindow;
- (void)_deliverInterfaceControllerToDelegate;
- (_Bool)_sceneWillConnect;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
- (void)_invalidate;
- (void)_readySceneForConnection;
- (struct UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (id)_definition;
- (id)_componentForKey:(id)arg1;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (_Bool)_permitContextCreationForBindingDescription:(CDStruct_a002d41c)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (id)_allWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (void)_updateVisibleWindowOrderWithTest:(CDUnknownBlockType)arg1;
- (void)_detachWindow:(id)arg1;
- (void)_attachWindow:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *_traitCollection;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) id <UICoordinateSpace> _coordinateSpace;
@property(readonly, nonatomic) long long _interfaceOrientation;
@property(readonly, nonatomic) UIScreen *_screen;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) id <CPTemplateApplicationSceneDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

