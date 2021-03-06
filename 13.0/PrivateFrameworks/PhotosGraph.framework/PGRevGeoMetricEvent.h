//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PLMetricEvent-Protocol.h>

@class NSDictionary, NSString;

@interface PGRevGeoMetricEvent : NSObject <PLMetricEvent>
{
    NSString *_identifier;
    double _numberOfAssetClustersPerMomentMean;
    double _numberOfAssetClustersPerMomentStdDev;
    double _numberOfAssetsPerClusterMean;
    double _numberOfAssetsPerClusterStdDev;
    double _ratioAssetClustersWithin10mOfCenter;
    double _ratioAssetClustersWithin20mOfCenter;
    double _ratioAssetClustersWithin50mOfCenter;
    double _ratioAssetClustersWithin100mOfCenter;
    double _ratioAssetClusters100mPlusFromCenter;
}

@property(readonly, nonatomic) double ratioAssetClusters100mPlusFromCenter; // @synthesize ratioAssetClusters100mPlusFromCenter=_ratioAssetClusters100mPlusFromCenter;
@property(readonly, nonatomic) double ratioAssetClustersWithin100mOfCenter; // @synthesize ratioAssetClustersWithin100mOfCenter=_ratioAssetClustersWithin100mOfCenter;
@property(readonly, nonatomic) double ratioAssetClustersWithin50mOfCenter; // @synthesize ratioAssetClustersWithin50mOfCenter=_ratioAssetClustersWithin50mOfCenter;
@property(readonly, nonatomic) double ratioAssetClustersWithin20mOfCenter; // @synthesize ratioAssetClustersWithin20mOfCenter=_ratioAssetClustersWithin20mOfCenter;
@property(readonly, nonatomic) double ratioAssetClustersWithin10mOfCenter; // @synthesize ratioAssetClustersWithin10mOfCenter=_ratioAssetClustersWithin10mOfCenter;
@property(readonly, nonatomic) double numberOfAssetsPerClusterStdDev; // @synthesize numberOfAssetsPerClusterStdDev=_numberOfAssetsPerClusterStdDev;
@property(readonly, nonatomic) double numberOfAssetsPerClusterMean; // @synthesize numberOfAssetsPerClusterMean=_numberOfAssetsPerClusterMean;
@property(readonly, nonatomic) double numberOfAssetClustersPerMomentStdDev; // @synthesize numberOfAssetClustersPerMomentStdDev=_numberOfAssetClustersPerMomentStdDev;
@property(readonly, nonatomic) double numberOfAssetClustersPerMomentMean; // @synthesize numberOfAssetClustersPerMomentMean=_numberOfAssetClustersPerMomentMean;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *payload;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithNumberOfAssetClustersPerMomentMean:(double)arg1 numberOfAssetClustersPerMomentStdDev:(double)arg2 numberOfAssetsPerClusterMean:(double)arg3 numberOfAssetsPerClusterStdDev:(double)arg4 ratioAssetClustersWithin10mOfCenter:(double)arg5 ratioAssetClustersWithin20mOfCenter:(double)arg6 ratioAssetClustersWithin50mOfCenter:(double)arg7 ratioAssetClustersWithin100mOfCenter:(double)arg8 ratioAssetClusters100mPlusFromCenter:(double)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

