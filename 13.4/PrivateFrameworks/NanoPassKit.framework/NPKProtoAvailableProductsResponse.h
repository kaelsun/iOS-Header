//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoAvailableProductsResponse : PBCodable <NSCopying>
{
    NSData *_availableProductsData;
    NSData *_errorData;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *availableProductsData; // @synthesize availableProductsData=_availableProductsData;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasAvailableProductsData;
@property(nonatomic) _Bool hasPending;

@end

