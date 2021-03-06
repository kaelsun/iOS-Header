//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitBackingStore/HMBCloudStateModel.h>

@class CKDatabase, HMBCloudID, NSData, NSDate, NSSet;

@interface HMBCloudDatabaseStateModel : HMBCloudStateModel
{
    CKDatabase *_database;
}

+ (id)hmbProperties;
- (void).cxx_destruct;
@property(nonatomic) __weak CKDatabase *database; // @synthesize database=_database;
@property(copy, nonatomic) NSSet *subscriptions;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;

// Remaining properties
@property(retain, nonatomic) HMBCloudID *cloudID; // @dynamic cloudID;
@property(retain, nonatomic) NSDate *lastAdministrativeFetch; // @dynamic lastAdministrativeFetch;
@property(retain, nonatomic) NSData *subscriptionsData; // @dynamic subscriptionsData;

@end

