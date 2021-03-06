//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKFrozenReminderObject.h>

@class NSString, REMAccount;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderSource : EKFrozenReminderObject
{
}

+ (Class)meltedClass;
- (int)flags;
- (void)setLastSyncEndDate:(id)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setLastSyncError:(unsigned long long)arg1;
- (id)lastSyncEndDate;
- (id)lastSyncStartDate;
- (unsigned long long)lastSyncError;
- (id)delegatedAccountOwnerStoreID;
- (id)externalID;
- (id)UUID;
- (id)title;
- (long long)sourceType;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (id)meltedObjectInStore:(id)arg1;
@property(readonly, nonatomic) REMAccount *remAccount;

@end

