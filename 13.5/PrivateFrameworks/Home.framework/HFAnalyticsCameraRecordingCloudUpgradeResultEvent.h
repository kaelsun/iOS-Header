//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAnalyticsEvent.h>

@interface HFAnalyticsCameraRecordingCloudUpgradeResultEvent : HFAnalyticsEvent
{
    unsigned long long _numCamerasWithRecording;
    unsigned long long _iCloudUpgradeOfferPresented;
    unsigned long long _iCloudPlanUpgradeState;
}

@property(nonatomic) unsigned long long iCloudPlanUpgradeState; // @synthesize iCloudPlanUpgradeState=_iCloudPlanUpgradeState;
@property(nonatomic) unsigned long long iCloudUpgradeOfferPresented; // @synthesize iCloudUpgradeOfferPresented=_iCloudUpgradeOfferPresented;
@property(nonatomic) unsigned long long numCamerasWithRecording; // @synthesize numCamerasWithRecording=_numCamerasWithRecording;
- (id)payload;
- (id)initWithData:(id)arg1;

@end

