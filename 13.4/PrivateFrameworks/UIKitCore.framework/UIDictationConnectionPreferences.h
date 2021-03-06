//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFPreferences;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionPreferences : NSObject
{
    AFPreferences *_afPreferences;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;
- (id)dictationSLSEnabledLanguages;
- (void)afPreferencesChanged:(id)arg1;
- (id)languageCode;
- (id)manualEndpointingThreshold;
- (_Bool)ignoreServerManualEndpointingThreshold;
- (_Bool)suppressDictationOptIn;
- (_Bool)suppressDataSharingOptIn;
- (long long)dataSharingOptInStatus;
- (_Bool)dictationIsEnabled;
- (id)initSingleton;

@end

