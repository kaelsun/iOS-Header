//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>
#import <SpringBoardFoundation/SBFAuthenticationRevoker-Protocol.h>

@protocol SBFAuthenticationStatusProvider <NSObject, SBFAuthenticationRevoker>
- (_Bool)isAuthenticatedCached;
- (_Bool)hasAuthenticatedAtLeastOnceSinceBoot;
- (_Bool)isAuthenticated;
- (_Bool)hasPasscodeSet;
@end

