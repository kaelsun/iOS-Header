//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDExternalManifestRequestOptions;

@interface ASDExternalManifestRequest : ASDEphemeralRequest
{
}

+ (long long)requestType;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) ASDExternalManifestRequestOptions *options; // @dynamic options;

@end

