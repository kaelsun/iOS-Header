//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>

#import <PassKitUI/PKPaymentSetupHideSetupLaterButtonProtocol-Protocol.h>
#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>
#import <PassKitUI/RemoteUIControllerDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class CLInUseAssertion, NSString, NSTimer, PKPasscodeUpgradeFlowController, PKPaymentProvisioningController, PKPaymentSetupFooterView, PKPaymentVerificationController, RemoteUIController, UINotificationFeedbackGenerator;

@interface PKPaymentSetupProvisioningFieldsViewController : PKPaymentSetupFieldsViewController <UITextFieldDelegate, RemoteUIControllerDelegate, PKPaymentVerificationControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol>
{
    PKPaymentSetupFooterView *_cardDetailsFooterView;
    RemoteUIController *_termsUIController;
    CLInUseAssertion *_CLInUse;
    _Bool _termsPresented;
    UINotificationFeedbackGenerator *_cardAddedFeedbackGenerator;
    PKPaymentVerificationController *_verificationController;
    _Bool _waitForActivation;
    CDUnknownBlockType _waitForActivationCompletionHandler;
    NSTimer *_waitForActivationTimer;
    NSString *_activatingPaymentPassUniqueID;
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
    _Bool _hideSetupLaterButton;
    PKPaymentProvisioningController *_paymentProvisioningController;
    CDUnknownBlockType _continueActionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType continueActionHandler; // @synthesize continueActionHandler=_continueActionHandler;
@property(nonatomic) _Bool hideSetupLaterButton; // @synthesize hideSetupLaterButton=_hideSetupLaterButton;
@property(retain, nonatomic) PKPaymentProvisioningController *paymentProvisioningController; // @synthesize paymentProvisioningController=_paymentProvisioningController;
- (void).cxx_destruct;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)resetRightBarButtonState;
- (void)resetProvisioningState;
- (void)resetAllFieldsAndProvisioningState;
- (void)updateFieldsModelWithPaymentCredential:(id)arg1;
- (void)updateFieldsModelWithRequirementsResponse:(id)arg1;
- (id)defaultFields;
- (void)showEligibilityIssueWithReason:(long long)arg1 learnMoreURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showProvisioningError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_showVerificationMethodsForPass:(id)arg1;
- (_Bool)_shouldShowVerificationMethodsForPass:(id)arg1;
- (void)_showAutomaticSelectionForPass:(id)arg1;
- (_Bool)_shouldShowAutomaticSelectionForPass:(id)arg1;
- (void)_handleNextCredentialWithPresentationDelay:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePassSuccessfullyAdded:(id)arg1;
- (void)handlePassSuccessfullyAdded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)declineTerms;
- (void)acceptTerms;
- (void)displayTermsForEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performPasscodeUpgradeIfNeeded:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayTermsForTermsURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1;
- (void)_provisioningStateDidChange:(id)arg1;
- (void)_passLibraryDidChange:(id)arg1;
- (void)_cleanupWaitForActivation;
- (void)_didActivatePaymentPass:(id)arg1;
- (void)_waitForActivationDidTimeout:(id)arg1;
- (void)_waitForActivation:(id)arg1;
- (void)_requestWaitForActivation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_logNormalizedLevenshteinDistanceFromString:(id)arg1 toField:(id)arg2 forKey:(id)arg3 onQueue:(id)arg4;
- (id)newPaymentProvisioningRequest;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentRequirementsRequest;
- (void)showPrivacy:(id)arg1;
- (void)setupLater:(id)arg1;
- (void)addDifferentCard:(id)arg1;
- (void)_showVerifiedUI;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleNextActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleNextActionError:(id)arg1 shouldContinue:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)handleNextButtonTapped:(id)arg1;
- (void)setNotificationTextInFooterView:(id)arg1;
- (void)suppressFooterViewManualEntryButton;
- (void)suppressFooterViewSetupLaterButton;
- (void)suppressFooterViewSkipCardButton;
- (id)_cardDetailsFooterView;
- (id)footerView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (void)_performFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performProvisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performTermsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performEligibilityWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

