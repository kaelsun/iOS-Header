//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAIntentGroupLaunchAppWithUserActivity : SABaseClientBoundCommand
{
}

+ (id)launchAppWithUserActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)launchAppWithUserActivity;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *userActivityIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

