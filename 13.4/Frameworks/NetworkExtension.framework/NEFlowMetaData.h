//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _fastOpenRequested;
    _Bool _multipathRequested;
    NSData *_sourceAppUniqueIdentifier;
    NSString *_sourceAppSigningIdentifier;
    NSData *_sourceAppAuditToken;
    NSUUID *_filterFlowIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) _Bool multipathRequested; // @synthesize multipathRequested=_multipathRequested;
@property(readonly) _Bool fastOpenRequested; // @synthesize fastOpenRequested=_fastOpenRequested;
@property(readonly) NSUUID *filterFlowIdentifier; // @synthesize filterFlowIdentifier=_filterFlowIdentifier;
@property(readonly) NSData *sourceAppAuditToken; // @synthesize sourceAppAuditToken=_sourceAppAuditToken;
@property(readonly) NSString *sourceAppSigningIdentifier; // @synthesize sourceAppSigningIdentifier=_sourceAppSigningIdentifier;
@property(readonly) NSData *sourceAppUniqueIdentifier; // @synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithProcessUUID:(id)arg1 signingIdentifier:(id)arg2;
- (id)initFromFlow:(struct _NEFlow *)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 signingIdentifier:(id)arg2 fastOpenRequested:(_Bool)arg3 multipathRequested:(_Bool)arg4 audit_token:(id)arg5 filterFlowID:(id)arg6;

@end

