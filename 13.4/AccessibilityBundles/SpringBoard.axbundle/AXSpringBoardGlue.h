//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXSpringBoardGlue : NSObject
{
}

+ (id)sharedInstance;
+ (void)accessibilityInitializeBundle;
+ (int)applicationOrientation;
+ (void)handleOrientationChange;
+ (void)toggleVoiceOverInfoPanel;
+ (_Bool)_isSessionLoginSession;
+ (_Bool)_showingBuddyLockScreen;
+ (_Bool)isBuddyRunning;
+ (void)removeVoiceOverInfoPanel:(double)arg1;
+ (void)resetCanShowAXInfoPanel;
+ (_Bool)canShowAXInfoPanel;
@property(readonly, nonatomic) int lastLockSource;
- (_Bool)_accessibilityAllowShowNotificationGestureOverride;
- (void)_accessibilitySetAllowShowNotificationGestureOverride:(_Bool)arg1;
@property(readonly, nonatomic, getter=isUILocked) _Bool UILocked;
- (_Bool)isDimmed;

@end

