//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
- (void)_addFailedTestFlightInstallIfNecessaryForInstallValues:(id)arg1 error:(id)arg2 changeset:(id)arg3;
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

