//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoImpressionTrackerFactory-Protocol.h>

@class NSString, SVTimeline;
@protocol SVVideoDurationObserverFactory, SVVideoImpressionThresholdProviding;

@interface SVVideoImpressionTrackerFactory : NSObject <SVVideoImpressionTrackerFactory>
{
    SVTimeline *_timeline;
    id <SVVideoImpressionThresholdProviding> _impressionThresholdProvider;
    id <SVVideoDurationObserverFactory> _durationObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoDurationObserverFactory> durationObserverFactory; // @synthesize durationObserverFactory=_durationObserverFactory;
@property(readonly, nonatomic) id <SVVideoImpressionThresholdProviding> impressionThresholdProvider; // @synthesize impressionThresholdProvider=_impressionThresholdProvider;
@property(readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;
- (void).cxx_destruct;
- (id)createImpressionTrackerForVideo:(id)arg1;
- (id)initWithTimeline:(id)arg1 impressionThresholdProvider:(id)arg2 durationObserverFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

