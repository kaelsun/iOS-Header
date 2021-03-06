//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRequestedFields;

__attribute__((visibility("hidden")))
@interface CKDPAssetsToDownload : PBCodable <NSCopying>
{
    CKDPRequestedFields *_assetFields;
    _Bool _allAssets;
    struct {
        unsigned int allAssets:1;
    } _has;
}

@property(retain, nonatomic) CKDPRequestedFields *assetFields; // @synthesize assetFields=_assetFields;
@property(nonatomic) _Bool allAssets; // @synthesize allAssets=_allAssets;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAssetFields;
@property(nonatomic) _Bool hasAllAssets;

@end

