//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAMutableFloatArray;

@interface PHAPrivateFederatedLearningLayerParameterDeltas : NSObject
{
    PHAMutableFloatArray *_weightDeltas;
    PHAMutableFloatArray *_biasDeltas;
}

+ (id)deltasFromLayerParameters:(id)arg1 toLayerParameters:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PHAMutableFloatArray *biasDeltas; // @synthesize biasDeltas=_biasDeltas;
@property(retain, nonatomic) PHAMutableFloatArray *weightDeltas; // @synthesize weightDeltas=_weightDeltas;
- (id)initWithWeightDeltas:(id)arg1 biasDeltas:(id)arg2;

@end

