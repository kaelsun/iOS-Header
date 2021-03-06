//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class ENCredentials, ENUserStoreClient, NSDictionary, NSError;

@protocol ENOAuthAuthenticatorDelegate <NSObject>
- (void)authenticatorDidFailWithError:(NSError *)arg1;
- (void)authenticatorDidAuthenticateWithCredentials:(ENCredentials *)arg1 authInfo:(NSDictionary *)arg2;
- (ENUserStoreClient *)userStoreClientForBootstrapping;
@end

