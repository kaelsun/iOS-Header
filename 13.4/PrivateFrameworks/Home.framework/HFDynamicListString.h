//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFStringGenerator-Protocol.h>

@class NSArray, NSString;

@interface HFDynamicListString : NSObject <HFStringGenerator>
{
    NSArray *_stringList;
    NSString *_truncationFormat;
    NSString *_summaryFormat;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *summaryFormat; // @synthesize summaryFormat=_summaryFormat;
@property(copy, nonatomic) NSString *truncationFormat; // @synthesize truncationFormat=_truncationFormat;
@property(copy, nonatomic) NSArray *stringList; // @synthesize stringList=_stringList;
- (id)attributeStringsSortedBySize:(id)arg1;
- (_Bool)prefersDynamicString;
- (id)stringWithAttributes:(id)arg1;
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithList:(id)arg1 truncationFormat:(id)arg2 summaryFormat:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

