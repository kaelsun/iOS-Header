//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _shadowFlags;
    struct CGSize _shadowOffset;
    double _shadowBlurRadius;
    NSColor *_shadowColor;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultShadowColor;
+ (id)shadow;
+ (void)initialize;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) id shadowColor;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShadow:(id)arg1;
- (void)_applyToCGContext:(struct CGContext *)arg1 graphicsContext:(id)arg2;
@property(nonatomic) double shadowBlurRadius;
@property(nonatomic) struct CGSize shadowOffset;
- (id)init;

@end

