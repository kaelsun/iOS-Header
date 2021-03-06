//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMAltimeterInternal : NSObject
{
    struct Dispatcher *fFilteredPressureDispatcher;
    CDUnknownBlockType fRelativeAltimeterHandler;
    NSOperationQueue *fRelativeAltimeterQueue;
    struct Sample {
        double timestamp;
        CDStruct_ebf20f05 pressureData;
    } fBaseAltimeterSample;
    float fBarometricBaseAltitude;
    _Bool fBaselineReceived;
    float fMostRecentFilteredPressure;
    struct deque<float, std::__1::allocator<float>> fPressureSamples;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    NSObject<OS_dispatch_queue> *fAppQueue;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fHandler;
    CDUnknownBlockType fSignificantElevationSampleHandler;
    double fElevationAscendedOffset;
    double fElevationDescendedOffset;
    _Bool fStopSignificantElevationUpdates;
    double fFilteredElevationOffset;
    _Bool fStopRelativeAltitudeUpdates;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (void)_stopRelativeAltitudeUpdates;
- (void)_startRelativeAltitudeUpdates;
- (void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_stopSignificantElevationUpdates;
- (void)_startSignificantElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_stopElevationUpdates;
- (void)_startElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

