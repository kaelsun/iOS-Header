//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAFamilyRequest.h>

@class NSString, SSAccount;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest
{
    SSAccount *_iTunesAccount;
    NSString *_inviteCode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(retain, nonatomic, setter=setiTunesAccount:) SSAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
- (id)urlRequest;
- (id)urlString;
- (_Bool)isUserInitiated;

@end

