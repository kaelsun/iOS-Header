//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPClientSession-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPImagesUsagePropensity, _CPNewsUsagePropensity, _CPSafariUsagePropensity, _CPSpotlightUsagePropensity, _CPUsageSinceLookback;

@interface _CPClientSession : PBCodable <_CPClientSession, NSSecureCoding>
{
    _Bool _firstUseOfTheDay;
    _Bool _removeTimestamps;
    _Bool _duEnabled;
    int _previousSessionEndReason;
    NSString *_agent;
    NSString *_userGuidString;
    NSDictionary *_resourceVersions;
    double _sessionStart;
    double _firstUseDate;
    NSString *_parsecDeveloperID;
    NSString *_countryCode;
    NSString *_locale;
    _CPUsageSinceLookback *_usageSinceLookback;
    _CPSafariUsagePropensity *_safariPropensity;
    _CPSpotlightUsagePropensity *_spotlightPropensity;
    _CPNewsUsagePropensity *_newsPropensity;
    _CPImagesUsagePropensity *_imagesPropensity;
    NSData *_jsonFeedback;
    NSArray *_feedbacks;
    unsigned long long _whichPropensity;
}

@property(readonly, nonatomic) unsigned long long whichPropensity; // @synthesize whichPropensity=_whichPropensity;
@property(copy, nonatomic) NSArray *feedbacks; // @synthesize feedbacks=_feedbacks;
@property(copy, nonatomic) NSData *jsonFeedback; // @synthesize jsonFeedback=_jsonFeedback;
@property(retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback; // @synthesize usageSinceLookback=_usageSinceLookback;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool duEnabled; // @synthesize duEnabled=_duEnabled;
@property(copy, nonatomic) NSString *parsecDeveloperID; // @synthesize parsecDeveloperID=_parsecDeveloperID;
@property(nonatomic) _Bool removeTimestamps; // @synthesize removeTimestamps=_removeTimestamps;
@property(nonatomic) double firstUseDate; // @synthesize firstUseDate=_firstUseDate;
@property(nonatomic) _Bool firstUseOfTheDay; // @synthesize firstUseOfTheDay=_firstUseOfTheDay;
@property(nonatomic) int previousSessionEndReason; // @synthesize previousSessionEndReason=_previousSessionEndReason;
@property(nonatomic) double sessionStart; // @synthesize sessionStart=_sessionStart;
@property(copy, nonatomic) NSDictionary *resourceVersions; // @synthesize resourceVersions=_resourceVersions;
@property(copy, nonatomic) NSString *userGuidString; // @synthesize userGuidString=_userGuidString;
@property(copy, nonatomic) NSString *agent; // @synthesize agent=_agent;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (void)addFeedback:(id)arg1;
- (void)clearFeedback;
- (void)setFeedback:(id)arg1;
@property(retain, nonatomic) _CPImagesUsagePropensity *imagesPropensity; // @synthesize imagesPropensity=_imagesPropensity;
@property(retain, nonatomic) _CPNewsUsagePropensity *newsPropensity; // @synthesize newsPropensity=_newsPropensity;
@property(retain, nonatomic) _CPSpotlightUsagePropensity *spotlightPropensity; // @synthesize spotlightPropensity=_spotlightPropensity;
@property(retain, nonatomic) _CPSafariUsagePropensity *safariPropensity; // @synthesize safariPropensity=_safariPropensity;
- (void)setResourceVersions:(id)arg1 forKey:(id)arg2;
- (_Bool)getResourceVersions:(id *)arg1 forKey:(id)arg2;
- (_Bool)requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

