//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthExperienceUI/_TtC18HealthExperienceUI22CloudSyncStateObserver.h>

#import <HealthExperienceUI/HKCloudSyncObserverDelegate-Protocol.h>

@interface _TtC18HealthExperienceUI22CloudSyncStateObserver (HealthExperienceUI) <HKCloudSyncObserverDelegate>
- (void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2;
- (void)cloudSyncObserverSyncCompleted:(id)arg1;
- (void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2;
- (void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2;
@end

