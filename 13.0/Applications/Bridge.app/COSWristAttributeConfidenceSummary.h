//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface COSWristAttributeConfidenceSummary : NSObject
{
    unsigned long long _attribute;
    double _confidence;
}

@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned long long attribute; // @synthesize attribute=_attribute;
- (id)description;
- (id)attributeDescription:(unsigned long long)arg1;
- (id)initWithAttribute:(unsigned long long)arg1 andConfidenceValue:(double)arg2;

@end

