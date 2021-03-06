//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKActivityCache.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKActivityCache (HDCodingSupport) <HDCoding>
+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
- (_Bool)addCodableRepresentationToCollectionForSync:(id)arg1;
- (_Bool)addCodableRepresentationToCollectionForJournal:(id)arg1;
- (id)codableRepresentationForJournal;
- (id)codableRepresentationForSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

