//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDiagnosticExtensionCore/HDDiagnosticOperation.h>

@interface HDCloudSyncDiagnosticOperation : HDDiagnosticOperation
{
}

- (void)_reportCloudSyncDescriptionWithHealthStore:(id)arg1;
- (void)_reportCloudSyncStoreDetailsWithSyncProvenance:(long long)arg1 storeUUID:(id)arg2 database:(id)arg3;
- (void)_reportCloudSyncStoreDetailsWithDatabase:(id)arg1;
- (void)_reportCloudSyncErrors;
- (void)_reportCloudSyncKeyValuesWithDatabase:(id)arg1;
- (void)_reportCloudSyncJournalStats;
- (_Bool)_reportCloudSyncStatusWithHealthStore:(id)arg1;
- (void)run;
- (id)reportFilename;

@end

