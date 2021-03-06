//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HRProfile, NSArray;

__attribute__((visibility("hidden")))
@interface WDClinicalSampleAccountsLoader : NSObject
{
    HRProfile *_profile;
    NSArray *_accountDataBatches;
    NSArray *_cachedAccounts;
}

+ (id)knownAccountFiles;
+ (id)appleProviderBrand;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(copy, nonatomic) NSArray *accountDataBatches; // @synthesize accountDataBatches=_accountDataBatches;
@property(retain, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
- (id)_parseAccounts;
- (id)sampleAccountsAsSearchResults;
- (id)_gatewayForAccount:(id)arg1;
- (id)_providerForAccount:(id)arg1;
- (id)providerForSampleDataSearchResultWithExternalID:(id)arg1 error:(id *)arg2;
- (_Bool)_triggerIngestOfDataBatch:(id)arg1 accountIdentifier:(id)arg2 error:(id *)arg3;
- (id)_createTemporaryFileForDataBatch:(id)arg1 error:(id *)arg2;
- (void)_createAccountAndTriggerIngestForDataBatch:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_sampleAccountForGatewayWithExternalID:(id)arg1 error:(id *)arg2;
- (void)loadFirstSampleAccountDataBatchForGatewayWithExternalID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProfile:(id)arg1;

@end

