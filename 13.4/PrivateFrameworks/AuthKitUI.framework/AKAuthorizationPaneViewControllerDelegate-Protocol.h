//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class AKAuthorization, AKAuthorizationPaneViewController, AKAuthorizationPresentationContext, AKAuthorizationUserResponse, NSDictionary, NSError, NSString;
@protocol AKAuthorizationEditableDataSources, AKAuthorizationPasswordAuthenticationDelegate;

@protocol AKAuthorizationPaneViewControllerDelegate <NSObject>
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController *)arg1 didRequestAuthorizationWithUserProvidedInformation:(AKAuthorizationUserResponse *)arg2 completion:(void (^)(AKAuthorization *, NSError *))arg3;
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController *)arg1 dismissWithAuthorization:(AKAuthorization *)arg2 error:(NSError *)arg3;

@optional
- (void)performPasswordAuthenticationForPaneViewController:(AKAuthorizationPaneViewController<AKAuthorizationPasswordAuthenticationDelegate> *)arg1;
- (void)performAppleIDAuthorizationForPaneViewController:(AKAuthorizationPaneViewController *)arg1;
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController<AKAuthorizationEditableDataSources> *)arg1 pushEditScope:(NSString *)arg2 presentationContext:(AKAuthorizationPresentationContext *)arg3 options:(NSDictionary *)arg4;
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController *)arg1 didRequestIconWithCompletion:(void (^)(AKIconContext *, NSError *))arg2;
@end

