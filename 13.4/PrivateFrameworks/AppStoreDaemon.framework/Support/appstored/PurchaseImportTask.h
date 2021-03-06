//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Task.h"

@class NSArray, NSString, PurchaseBatch, PurchaseInfo;

@interface PurchaseImportTask : Task
{
    NSString *_fileName;
    struct os_unfair_lock_s _lock;
    PurchaseBatch *_purchaseBatch;
    PurchaseInfo *_purchaseInfo;
    NSArray *_storeItems;
    _Bool _overrideAutomaticType;
}

- (void).cxx_destruct;
- (_Bool)_validateStoreItem:(id)arg1 externalID:(id)arg2 withError:(id *)arg3;
- (void)_requestCompanionInstallationForStoreItem:(id)arg1;
- (void)_reportMissingSINFForStoreItem:(id)arg1;
- (_Bool)_isWatchOnlyStoreItem:(id)arg1 withError:(id *)arg2;
- (void)main;
@property _Bool overrideAutomaticType; // @synthesize overrideAutomaticType=_overrideAutomaticType;
- (id)initWithStoreItems:(id)arg1 purchaseInfo:(id)arg2 purchaseBatch:(id)arg3;
- (id)init;

@end

