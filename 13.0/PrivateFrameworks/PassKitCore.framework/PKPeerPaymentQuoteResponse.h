//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse
{
    PKPeerPaymentQuote *_quote;
}

@property(readonly, nonatomic) PKPeerPaymentQuote *quote; // @synthesize quote=_quote;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

