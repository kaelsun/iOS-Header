//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingSetValue.h>

@class NSString;

@interface SASettingSetNoiseManagement : SASettingSetValue
{
}

+ (id)setNoiseManagementWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNoiseManagement;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *noiseManagementOption;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

