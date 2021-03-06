//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CacheDeletePurgeableProvider-Protocol.h"

@class NSRecursiveLock, NSString;
@protocol OS_dispatch_source;

@interface ODRManager : NSObject <CacheDeletePurgeableProvider>
{
    NSRecursiveLock *_resourcesLock;
    NSObject<OS_dispatch_source> *_lowDisk;
}

+ (_Bool)isAppRunning:(id)arg1;
+ (long long)_availableSpaceCushion;
+ (long long)_availableSpaceOnDeviceRootVolume;
+ (void)initialize;
+ (id)defaultManager;
- (void).cxx_destruct;
- (id)_currentDownloadStatus;
- (id)_allPurgeableAssetPacks;
- (id)status;
- (void)purgeAssetWithIdentifier:(id)arg1 forReason:(long long)arg2;
- (void)purgeAllAssetsForApplication:(id)arg1 forReason:(long long)arg2;
- (long long)purgeBytes:(long long)arg1 odrOnly:(_Bool)arg2;
- (void)performResourceAccessBlock:(CDUnknownBlockType)arg1;
- (void)performResourceAccessBlock:(CDUnknownBlockType)arg1 forApplicationBundleID:(id)arg2;
- (void)handleInstalledApplication:(id)arg1;
- (_Bool)checkAndRequestRequiredSpaceForRequest:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

