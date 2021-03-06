//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation
{
    _Bool _markZonesAsUserPurged;
    CDUnknownBlockType _modifyRecordZonesCompletionBlock;
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableArray *_savedRecordZones;
    NSMutableArray *_deletedRecordZoneIDs;
    NSMutableDictionary *_recordZonesByZoneIDs;
    NSMutableDictionary *_recordZoneErrors;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
@property(retain, nonatomic) NSMutableDictionary *recordZoneErrors; // @synthesize recordZoneErrors=_recordZoneErrors;
@property(retain, nonatomic) NSMutableDictionary *recordZonesByZoneIDs; // @synthesize recordZonesByZoneIDs=_recordZonesByZoneIDs;
@property(retain, nonatomic) NSMutableArray *deletedRecordZoneIDs; // @synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs;
@property(retain, nonatomic) NSMutableArray *savedRecordZones; // @synthesize savedRecordZones=_savedRecordZones;
@property(copy, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(copy, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)activityCreate;
@property(copy, nonatomic) CDUnknownBlockType modifyRecordZonesCompletionBlock; // @synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (id)init;

@end

