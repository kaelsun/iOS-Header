//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoginKit/NSSecureCoding-Protocol.h>

@interface LKNamingSimilarity : NSObject <NSSecureCoding>
{
    unsigned long long _similarity;
}

+ (_Bool)supportsSecureCoding;
+ (id)namingSimilarityWithSimilarity:(unsigned long long)arg1;
@property(nonatomic) unsigned long long similarity; // @synthesize similarity=_similarity;
- (id)init;
- (_Bool)isEqualToLKNamingSimilarity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

