//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PGSharingFeatures : NSObject <NSSecureCoding>
{
    NSArray *_classes;
    NSArray *_momentFeatureVectors;
    NSArray *_assetFeatureVectors;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *assetFeatureVectors; // @synthesize assetFeatureVectors=_assetFeatureVectors;
@property(readonly, nonatomic) NSArray *momentFeatureVectors; // @synthesize momentFeatureVectors=_momentFeatureVectors;
@property(readonly, nonatomic) NSArray *classes; // @synthesize classes=_classes;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3;

@end

