//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardServices/_CRSServiceBundle.h>

#import <CardServices/CRSCardServing-Protocol.h>

@class NSString;
@protocol CRSCardServing;

@interface _CRSCardServiceBundle : _CRSServiceBundle <CRSCardServing>
{
    id <CRSCardServing> _cardService;
}

- (void).cxx_destruct;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (_Bool)canSatisfyCardRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_initializeCardServiceWithClass:(Class)arg1;
- (id)underlyingService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

