//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentDependencyDescriptor.h>

@interface SXComponentLayoutAttributeDescriptor : SXComponentDependencyDescriptor
{
    _Bool _ignoreMargins;
    int _fromLayoutAttribute;
    int _toLayoutAttribute;
}

+ (id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(_Bool)arg3;
@property(nonatomic) _Bool ignoreMargins; // @synthesize ignoreMargins=_ignoreMargins;
@property(nonatomic) int toLayoutAttribute; // @synthesize toLayoutAttribute=_toLayoutAttribute;
@property(nonatomic) int fromLayoutAttribute; // @synthesize fromLayoutAttribute=_fromLayoutAttribute;
- (id)initWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(_Bool)arg3;

@end

