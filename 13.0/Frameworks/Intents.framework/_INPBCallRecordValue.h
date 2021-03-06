//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCallRecordValue-Protocol.h>

@class NSString, _INPBCallMetrics, _INPBContactValue, _INPBDateTime, _INPBInteger;

@interface _INPBCallRecordValue : PBCodable <_INPBCallRecordValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int callCapability:1;
        unsigned int callType:1;
        unsigned int unseen:1;
    } _has;
    _Bool _unseen;
    _Bool __encodeLegacyGloryData;
    int _callCapability;
    int _callType;
    _INPBCallMetrics *_callMetrics;
    _INPBContactValue *_caller;
    _INPBDateTime *_dateCreated;
    NSString *_identifier;
    _INPBInteger *_numberOfCalls;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) _Bool unseen; // @synthesize unseen=_unseen;
@property(retain, nonatomic) _INPBInteger *numberOfCalls; // @synthesize numberOfCalls=_numberOfCalls;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTime *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) _INPBContactValue *caller; // @synthesize caller=_caller;
@property(nonatomic) int callType; // @synthesize callType=_callType;
@property(retain, nonatomic) _INPBCallMetrics *callMetrics; // @synthesize callMetrics=_callMetrics;
@property(nonatomic) int callCapability; // @synthesize callCapability=_callCapability;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasUnseen;
@property(readonly, nonatomic) _Bool hasNumberOfCalls;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasCaller;
- (int)StringAsCallType:(id)arg1;
- (id)callTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCallType;
@property(readonly, nonatomic) _Bool hasCallMetrics;
- (int)StringAsCallCapability:(id)arg1;
- (id)callCapabilityAsString:(int)arg1;
@property(nonatomic) _Bool hasCallCapability;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

