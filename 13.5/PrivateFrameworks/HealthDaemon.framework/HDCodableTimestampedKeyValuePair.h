//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying>
{
    double _numberDoubleValue;
    long long _numberIntValue;
    double _timestamp;
    NSData *_bytesValue;
    NSString *_key;
    NSString *_stringValue;
    struct {
        unsigned int numberDoubleValue:1;
        unsigned int numberIntValue:1;
        unsigned int timestamp:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double numberDoubleValue; // @synthesize numberDoubleValue=_numberDoubleValue;
@property(nonatomic) long long numberIntValue; // @synthesize numberIntValue=_numberIntValue;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBytesValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasNumberDoubleValue;
@property(nonatomic) _Bool hasNumberIntValue;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasKey;
- (id)decodedTimestamp;
- (id)decodedValue;
- (void)setTimestampWithDate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2 timestamp:(id)arg3;

@end

