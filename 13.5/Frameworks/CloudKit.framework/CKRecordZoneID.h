//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKSQLiteItem-Protocol.h>
#import <CloudKit/CKXPCSuitableString-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKRecordZoneID : NSObject <CKXPCSuitableString, CKSQLiteItem, NSSecureCoding, NSCopying>
{
    NSString *_zoneName;
    NSString *_ownerName;
}

+ (_Bool)supportsSecureCoding;
+ (id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (_Bool)isDefaultRecordZoneID;
- (long long)compareToRecordZoneID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)ckShortDescription;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (id)CKPropertiesDescriptionWithProperties:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)sqliteRepresentation;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)_initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)init;
- (id)CKXPCSuitableString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

