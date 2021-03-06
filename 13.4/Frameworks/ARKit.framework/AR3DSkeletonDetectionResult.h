//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class AR2DSkeletonDetectionResult;

@interface AR3DSkeletonDetectionResult : NSObject <NSSecureCoding, NSCopying>
{
    vector_1cb3ea33 _jointsVector;
    vector_1cb3ea33 _jointsVectorLocalSpace;
    AR2DSkeletonDetectionResult *_skeletonDetectionResult2D;
}

+ (id)parentIndices;
+ (id)jointNames;
+ (id)childrenIndices;
+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) AR2DSkeletonDetectionResult *skeletonDetectionResult2D; // @synthesize skeletonDetectionResult2D=_skeletonDetectionResult2D;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)createResultScaledByFactor:(float)arg1;
- (_Bool)isJointTracked:(long long)arg1;
@property(readonly, nonatomic) unsigned long long jointCount;
// Error parsing type for property jointsLocalSpace:
// Property attributes: Tr^,R,N

// Error parsing type for property joints:
// Property attributes: Tr^,R,N

-     // Error parsing type: @40@0:8^16Q24@32, name: initWithJoints:numberOfJoints:referenceDetectionResult:

@end

