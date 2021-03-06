//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSUIWebClientContext, CTXPCServiceSubscriptionContext, CoreTelephonyClient;
@protocol AMSUIWebJSPropertiesDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSUIWebJSProperties : NSObject
{
    id <AMSUIWebJSPropertiesDelegate> _delegate;
    AMSUIWebClientContext *_context;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonyContext;
    NSObject<OS_dispatch_queue> *_telephonyQueue;
}

+ (_Bool)_hasRequiredTelephonyEntitlement;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyQueue; // @synthesize telephonyQueue=_telephonyQueue;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *telephonyContext; // @synthesize telephonyContext=_telephonyContext;
@property(retain, nonatomic) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
@property(nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <AMSUIWebJSPropertiesDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_hexStringFromColor:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (void)phoneNumberAvailable:(id)arg1;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (_Bool)_setupTelephonyIfNeeded;
- (id)_telephoneProperties;
- (id)_propertiesForAccount:(id)arg1 store:(id)arg2;
- (id)_propertiesForClientInfo:(id)arg1;
- (id)_processProperties;
- (id)_deviceProperties;
- (id)_accountsProperties;
- (void)_accountStoreDidChange:(id)arg1;
- (id)generateProperties;
- (void)dealloc;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;

@end

