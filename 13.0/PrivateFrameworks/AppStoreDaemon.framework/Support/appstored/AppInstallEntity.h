//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@class AppInstallPolicy, MIStoreMetadata, NSString;

@interface AppInstallEntity : SQLiteEntity
{
}

+ (Class)memoryEntityClass;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)databaseTable;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
- (void)_sendUpdateStateChangedNotification:(id)arg1;
- (void)setPackagesWithArray:(id)arg1;
- (void)modifyInstallPolicyUsingBlock:(CDUnknownBlockType)arg1;
- (id)finishWithFinalPhase:(long long)arg1;
- (id)failWithError:(id)arg1;
- (id)bestPackage;
@property(copy) MIStoreMetadata *storeMetadata;
@property(readonly) NSString *logKey;
@property(copy) AppInstallPolicy *installPolicy;
@property long long installPhase;
- (id)copyEvaluatorDownload;

@end

