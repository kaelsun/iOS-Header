//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMUserIdentityCache-Protocol.h"

@class MCMUserIdentity, NSDictionary, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface MCMUserIdentityCache : NSObject <MCMUserIdentityCache>
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_flushQueue;
    _Bool _registered;
    _Bool _cacheInvalid;
    NSDictionary *_lock_bundleToEnterpriseIdentitiesMap;
    NSDictionary *_lock_personaUniqueStringToUserIdentityMap;
    NSDictionary *_lock_personaIDToUserIdentityMap;
    MCMUserIdentity *_lock_userIdentityForPersonalPersona;
    MCMUserIdentity *_lock_userIdentityForUnspecificPersona;
    NSHashTable *_observers;
}

+ (id)_updateUserIdentity:(id)arg1 withUID:(unsigned int)arg2 GID:(unsigned int)arg3;
+ (_Bool)personasAreSupported;
+ (id)defaultUserIdentity;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool cacheInvalid; // @synthesize cacheInvalid=_cacheInvalid;
- (void)personaListDidUpdate;
- (void)_registerForPersonaListUpdate;
- (void)_lock_flushAndRepopulateWithUserIdentities:(id)arg1;
- (void)_lock_flush;
- (void)_lock_resync;
- (id)_lock_userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;
- (_Bool)_lock_isBundleIdentifier:(id)arg1 associatedWithUserIdentity:(id)arg2;
- (id)_lock_userIdentitiesForBundleIdentifier:(id)arg1;
@property(readonly, nonatomic) MCMUserIdentity *lock_userIdentityForUnspecificPersona; // @synthesize lock_userIdentityForUnspecificPersona=_lock_userIdentityForUnspecificPersona;
@property(readonly, nonatomic) MCMUserIdentity *lock_userIdentityForPersonalPersona; // @synthesize lock_userIdentityForPersonalPersona=_lock_userIdentityForPersonalPersona;
@property(readonly, nonatomic) NSDictionary *lock_personaIDToUserIdentityMap; // @synthesize lock_personaIDToUserIdentityMap=_lock_personaIDToUserIdentityMap;
@property(readonly, nonatomic) NSDictionary *lock_personaUniqueStringToUserIdentityMap; // @synthesize lock_personaUniqueStringToUserIdentityMap=_lock_personaUniqueStringToUserIdentityMap;
@property(readonly, nonatomic) NSDictionary *lock_bundleToEnterpriseIdentitiesMap; // @synthesize lock_bundleToEnterpriseIdentitiesMap=_lock_bundleToEnterpriseIdentitiesMap;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)flushAndRepopulateWithUserIdentities:(id)arg1;
- (void)unregister;
- (id)userIdentityForLegacyMobileUser;
- (id)userIdentityForCurrentContextWithUID:(unsigned int)arg1 GID:(unsigned int)arg2;
- (id)userIdentityForCurrentContext;
- (id)defaultUserIdentity;
- (void)forEachAccessibleUserIdentitySynchronouslyExecuteBlock:(CDUnknownBlockType)arg1;
- (void)flush;
- (id)userIdentityWithPersonaID:(unsigned int)arg1;
- (id)userIdentityForPersonalPersonaWithUID:(unsigned int)arg1 GID:(unsigned int)arg2;
- (id)unspecificUserIdentity;
- (id)userIdentityForPersonalPersona;
- (id)userIdentityForPersonaUniqueString:(id)arg1 UID:(unsigned int)arg2 GID:(unsigned int)arg3;
- (id)userIdentityForCurrentUserWithPersonaUniqueString:(id)arg1;
- (_Bool)isBundleIdentifier:(id)arg1 associatedWithUserIdentity:(id)arg2;
- (id)userIdentitiesForBundleIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

