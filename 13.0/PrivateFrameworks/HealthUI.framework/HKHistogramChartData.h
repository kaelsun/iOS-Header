//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSString;

@interface HKHistogramChartData : NSObject <HKGraphSeriesChartData>
{
    double _xValue;
    double _yValue;
}

@property(readonly, nonatomic) double yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) double xValue; // @synthesize xValue=_xValue;
- (id)initWithXValue:(double)arg1 yValue:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

