//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject
{
    NSString *_identifier;
    unsigned long long _version;
    unsigned long long _type;
    unsigned long long _blendMode;
    PKInkParticleDescriptor *_particleDescriptor;
}

@property(retain, nonatomic) PKInkParticleDescriptor *particleDescriptor; // @synthesize particleDescriptor=_particleDescriptor;
@property(nonatomic) unsigned long long blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

