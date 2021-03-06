//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class NSString;

@interface SBVolumeControlState : NSObject <NSCopying>
{
    _Bool _isAudioPlayingSomewhere;
    _Bool _currentRouteHasVolumeControl;
    _Bool _isFullyMuted;
    _Bool _isRingerMuted;
    _Bool _isUILocked;
    _Bool _isHostingAppOnLockScreen;
    _Bool _isShowingLockScreenMediaControls;
    NSString *_activeVolumeCategoryName;
}

@property(nonatomic, setter=setShowingLockScreenMediaControls:) _Bool isShowingLockScreenMediaControls; // @synthesize isShowingLockScreenMediaControls=_isShowingLockScreenMediaControls;
@property(nonatomic, setter=setHostingAppOnLockScreen:) _Bool isHostingAppOnLockScreen; // @synthesize isHostingAppOnLockScreen=_isHostingAppOnLockScreen;
@property(nonatomic, setter=setUILocked:) _Bool isUILocked; // @synthesize isUILocked=_isUILocked;
@property(nonatomic, setter=setRingerMuted:) _Bool isRingerMuted; // @synthesize isRingerMuted=_isRingerMuted;
@property(nonatomic, setter=setFullyMuted:) _Bool isFullyMuted; // @synthesize isFullyMuted=_isFullyMuted;
@property(nonatomic, setter=setCurrentRouteHasVolumeControl:) _Bool currentRouteHasVolumeControl; // @synthesize currentRouteHasVolumeControl=_currentRouteHasVolumeControl;
@property(nonatomic, setter=setAudioPlayingSomewhere:) _Bool isAudioPlayingSomewhere; // @synthesize isAudioPlayingSomewhere=_isAudioPlayingSomewhere;
@property(copy, nonatomic) NSString *activeVolumeCategoryName; // @synthesize activeVolumeCategoryName=_activeVolumeCategoryName;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

