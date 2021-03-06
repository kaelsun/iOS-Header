//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject
{
    _Bool _invalidatedSpecifiers;
    NSMutableSet *_searchEntries;
    PSSpecifierUpdates *_specifierUpdates;
}

+ (id)deferredInvalidationUpdatesWithEntries:(id)arg1;
+ (id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool invalidatedSpecifiers; // @synthesize invalidatedSpecifiers=_invalidatedSpecifiers;
@property(retain, nonatomic) PSSpecifierUpdates *specifierUpdates; // @synthesize specifierUpdates=_specifierUpdates;
@property(retain, nonatomic) NSMutableSet *searchEntries; // @synthesize searchEntries=_searchEntries;
- (id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(_Bool)arg3;

@end

