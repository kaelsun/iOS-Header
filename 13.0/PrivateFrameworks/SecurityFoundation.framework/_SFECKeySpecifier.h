//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier
{
    id _ecKeySpecifierInternal;
}

+ (_Bool)supportsSecureCoding;
+ (Class)keyClass;
- (void).cxx_destruct;
@property long long curve;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(long long)arg1;

@end

