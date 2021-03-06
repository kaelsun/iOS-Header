//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;
@protocol SUPreferencesObserver;

@interface SUPreferences : NSObject
{
    id <SUPreferencesObserver> _observer;
    _Bool _disableManagedRequest;
    _Bool _disableUserWiFiOnlyPeriod;
    _Bool _disableBuildNumberComparison;
    _Bool _allowSameBuildUpdates;
    _Bool _disableAvailabilityAlerts;
    _Bool _disableAutoDownload;
    _Bool _simulateAutoDownload;
    _Bool _disableAutoSU;
    _Bool _scanWeeklyInternally;
    _Bool _forceFullReplacement;
    _Bool _disableFullReplacementFallback;
    NSNumber *_updateDelayInterval;
    _Bool _shouldDelayUpdates;
    _Bool _shouldDelayInMinutes;
    NSNumber *_unmetConstraints;
    NSNumber *_mandatorySUFlags;
    NSString *_requestedPMV;
    NSDate *_autoSUStart;
    NSDate *_autoSUEnd;
    NSDate *_autoSUUnlockStart;
    NSDate *_autoSUUnlockEnd;
    NSNumber *_autoSUStartDelta;
    NSNumber *_autoSUEndDelta;
    NSNumber *_autoSUUnlockStartDelta;
    NSNumber *_autoSUUnlockEndDelta;
    _Bool _autoUpdateForceOn;
    _Bool _autoUpdateForceOff;
    _Bool _automaticUpdateV2Enabled;
    NSNumber *_bannerDelay;
    _Bool _autoDownloadDeletedBuild;
    _Bool _backgroundDLKnownBuilds;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool backgroundDLKnownBuilds; // @synthesize backgroundDLKnownBuilds=_backgroundDLKnownBuilds;
@property(readonly, nonatomic) _Bool autoDownloadDeletedBuild; // @synthesize autoDownloadDeletedBuild=_autoDownloadDeletedBuild;
@property(readonly, nonatomic) NSNumber *bannerDelay; // @synthesize bannerDelay=_bannerDelay;
@property(nonatomic, setter=enableAutomaticUpdateV2:) _Bool isAutomaticUpdateV2Enabled; // @synthesize isAutomaticUpdateV2Enabled=_automaticUpdateV2Enabled;
@property(readonly, nonatomic) _Bool autoUpdateForceOff; // @synthesize autoUpdateForceOff=_autoUpdateForceOff;
@property(readonly, nonatomic) _Bool autoUpdateForceOn; // @synthesize autoUpdateForceOn=_autoUpdateForceOn;
@property(readonly, nonatomic) NSNumber *autoSUUnlockEndDelta; // @synthesize autoSUUnlockEndDelta=_autoSUUnlockEndDelta;
@property(readonly, nonatomic) NSNumber *autoSUUnlockStartDelta; // @synthesize autoSUUnlockStartDelta=_autoSUUnlockStartDelta;
@property(readonly, nonatomic) NSNumber *autoSUEndDelta; // @synthesize autoSUEndDelta=_autoSUEndDelta;
@property(readonly, nonatomic) NSNumber *autoSUStartDelta; // @synthesize autoSUStartDelta=_autoSUStartDelta;
@property(readonly, nonatomic) NSString *requestedPMV; // @synthesize requestedPMV=_requestedPMV;
@property(readonly, nonatomic) NSNumber *mandatorySUFlags; // @synthesize mandatorySUFlags=_mandatorySUFlags;
@property(readonly, nonatomic) _Bool shouldDelayInMinutes; // @synthesize shouldDelayInMinutes=_shouldDelayInMinutes;
@property(readonly, nonatomic) NSNumber *unmetConstraints; // @synthesize unmetConstraints=_unmetConstraints;
@property(readonly, nonatomic) _Bool shouldDelayUpdates; // @synthesize shouldDelayUpdates=_shouldDelayUpdates;
@property(readonly, nonatomic) NSNumber *updateDelayInterval; // @synthesize updateDelayInterval=_updateDelayInterval;
@property(readonly, nonatomic) _Bool disableFullReplacementFallback; // @synthesize disableFullReplacementFallback=_disableFullReplacementFallback;
@property(readonly, nonatomic) _Bool forceFullReplacement; // @synthesize forceFullReplacement=_forceFullReplacement;
@property(readonly, nonatomic) _Bool scanWeeklyInternally; // @synthesize scanWeeklyInternally=_scanWeeklyInternally;
@property(readonly, nonatomic, getter=isAutoSUDisabled) _Bool disableAutoSU; // @synthesize disableAutoSU=_disableAutoSU;
@property(readonly, nonatomic) _Bool simulateAutoDownload; // @synthesize simulateAutoDownload=_simulateAutoDownload;
@property(readonly, nonatomic, getter=isAutoDownloadDisabled) _Bool disableAutoDownload; // @synthesize disableAutoDownload=_disableAutoDownload;
@property(readonly, nonatomic) _Bool disableAvailabilityAlerts; // @synthesize disableAvailabilityAlerts=_disableAvailabilityAlerts;
@property(readonly, nonatomic) _Bool allowSameBuildUpdates; // @synthesize allowSameBuildUpdates=_allowSameBuildUpdates;
@property(readonly, nonatomic) _Bool disableBuildNumberComparison; // @synthesize disableBuildNumberComparison=_disableBuildNumberComparison;
@property(readonly, nonatomic) _Bool disableUserWiFiOnlyPeriod; // @synthesize disableUserWiFiOnlyPeriod=_disableUserWiFiOnlyPeriod;
@property(readonly, nonatomic) _Bool disableManagedRequest; // @synthesize disableManagedRequest=_disableManagedRequest;
@property(nonatomic) id <SUPreferencesObserver> observer; // @synthesize observer=_observer;
- (_Bool)isKeySetInPreferences:(id)arg1;
- (void *)_copyPreferenceForKey:(struct __CFString *)arg1 ofType:(unsigned long long)arg2;
- (id)_copyNumberPreferenceForKey:(id)arg1;
- (id)_copyStringPreferenceForKey:(id)arg1;
- (void)_setBooleanPreferenceForKey:(id)arg1 value:(_Bool)arg2;
- (_Bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (id)_createDatePreferencesForKey:(id)arg1;
- (void)_loadPreferences;
- (void)reload;
- (id)_mandatorySUFlagsForPreferences;
- (void)dealloc;
- (id)init;

@end

