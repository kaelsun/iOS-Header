//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol AAAppleIDLoginPlugin <NSObject>
- (void)handleLoginResponse:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (NSDictionary *)parametersForLoginRequest;
- (NSDictionary *)parametersForIdentityEstablishmentRequest;
- (NSString *)serviceIdentifier;
@end

