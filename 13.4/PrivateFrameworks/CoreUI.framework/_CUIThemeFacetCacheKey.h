//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIThemeFacetCacheKey : NSObject
{
    struct _renditionkeytoken keyList[22];
    long long themeIndex;
    unsigned long long hashPrecalc;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKeyList:(const struct _renditionkeytoken *)arg1 themeIndex:(long long)arg2;
- (unsigned long long)hash64;

@end

