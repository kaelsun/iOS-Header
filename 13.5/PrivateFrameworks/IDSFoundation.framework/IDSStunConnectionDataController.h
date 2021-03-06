//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSStunConnectionDataController : NSObject
{
    NSMutableDictionary *_tokenToConnectionData;
    NSMutableDictionary *_tokenToDeliveryStatus;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeData:(id)arg1;
- (void)setDeliveryStatus:(id)arg1 status:(unsigned long long)arg2;
- (unsigned long long)deliveryStatus:(id)arg1;
- (id)candidatesFromData:(id)arg1 token:(id)arg2;
- (id)dataFromCandidates:(id)arg1 token:(id)arg2;

@end

