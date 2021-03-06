//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBWellnessMetadataValue-Protocol.h>

@class NSString, _INPBDouble, _INPBInteger, _INPBString;

@interface _INPBWellnessMetadataValue : PBCodable <_INPBWellnessMetadataValue, NSSecureCoding, NSCopying>
{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBDouble *_pbDoubleValue;
    _INPBInteger *_ordinalValue;
    _INPBString *_pbStringValue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBString *pbStringValue; // @synthesize pbStringValue=_pbStringValue;
@property(retain, nonatomic) _INPBInteger *ordinalValue; // @synthesize ordinalValue=_ordinalValue;
@property(retain, nonatomic) _INPBDouble *pbDoubleValue; // @synthesize pbDoubleValue=_pbDoubleValue;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasPbStringValue;
@property(readonly, nonatomic) _Bool hasOrdinalValue;
@property(readonly, nonatomic) _Bool hasPbDoubleValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

