//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemAirPlayDestinationsDeclaration_WhitelistItem : CEMPayloadBase
{
    NSString *_payloadDeviceID;
}

+ (id)buildRequiredOnlyWithDeviceID:(id)arg1;
+ (id)buildWithDeviceID:(id)arg1;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadDeviceID; // @synthesize payloadDeviceID=_payloadDeviceID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

