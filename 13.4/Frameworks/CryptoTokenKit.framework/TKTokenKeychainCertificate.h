//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CryptoTokenKit/TKTokenKeychainItem.h>

@class NSData, NSNumber;

@interface TKTokenKeychainCertificate : TKTokenKeychainItem
{
    NSData *_data;
    NSData *_subject;
    NSData *_issuer;
    NSData *_serialNumber;
    NSData *_subjectKeyID;
    NSData *_publicKeyHash;
    NSNumber *_certificateType;
    NSNumber *_certificateEncoding;
}

- (void).cxx_destruct;
@property(retain) NSNumber *certificateEncoding; // @synthesize certificateEncoding=_certificateEncoding;
@property(retain) NSNumber *certificateType; // @synthesize certificateType=_certificateType;
@property(retain) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(retain) NSData *subjectKeyID; // @synthesize subjectKeyID=_subjectKeyID;
@property(retain) NSData *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain) NSData *issuer; // @synthesize issuer=_issuer;
@property(retain) NSData *subject; // @synthesize subject=_subject;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
- (id)keychainAttributes;
- (id)initWithItemInfo:(id)arg1;
- (id)initWithCertificate:(struct __SecCertificate *)arg1 objectID:(id)arg2;

@end

