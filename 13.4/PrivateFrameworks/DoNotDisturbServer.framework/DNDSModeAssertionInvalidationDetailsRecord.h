//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class NSString;

@interface DNDSModeAssertionInvalidationDetailsRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSString *_identifier;
}

+ (id)recordForInvalidationDetails:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

