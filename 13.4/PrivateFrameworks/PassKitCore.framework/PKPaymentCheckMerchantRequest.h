//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentCheckMerchantRequest : PKPaymentWebServiceRequest
{
    NSString *_merchantIdentifier;
    NSString *_domainName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 domainName:(id)arg2;

@end

