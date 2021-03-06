//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSData, NSString, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable <NSCopying>
{
    NSData *_assetData;
    NSString *_assetKey;
    int _cacheType;
    NSString *_gizmoCacheIdentifier;
    int _messageType;
    SPProtoCacheSyncData *_syncData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPProtoCacheSyncData *syncData; // @synthesize syncData=_syncData;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSString *gizmoCacheIdentifier; // @synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier;
@property(retain, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(nonatomic) int cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSyncData;
@property(readonly, nonatomic) _Bool hasAssetData;
@property(readonly, nonatomic) _Bool hasGizmoCacheIdentifier;
@property(readonly, nonatomic) _Bool hasAssetKey;

@end

