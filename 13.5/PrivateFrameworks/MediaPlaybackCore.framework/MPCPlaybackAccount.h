//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class ICMusicSubscriptionStatus, ICUserIdentity, NSString;

@interface MPCPlaybackAccount : NSObject <NSCopying>
{
    _Bool _hasCloudLibraryEnabled;
    _Bool _delegated;
    _Bool _activeAccount;
    ICUserIdentity *_userIdentity;
    NSString *_hashedDSID;
    NSString *_storeFrontIdentifier;
    ICMusicSubscriptionStatus *_subscriptionStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(nonatomic, getter=isActiveAccount) _Bool activeAccount; // @synthesize activeAccount=_activeAccount;
@property(readonly, nonatomic, getter=isDelegated) _Bool delegated; // @synthesize delegated=_delegated;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(nonatomic) _Bool hasCloudLibraryEnabled; // @synthesize hasCloudLibraryEnabled=_hasCloudLibraryEnabled;
@property(copy, nonatomic) NSString *hashedDSID; // @synthesize hashedDSID=_hashedDSID;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) _Bool usesLease;
@property(readonly, nonatomic) _Bool hasCatalogPlaybackCapability;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDelegatedUserIdentity:(id)arg1;
- (id)initWithUserIdentity:(id)arg1 subscriptionStatus:(id)arg2;

@end

