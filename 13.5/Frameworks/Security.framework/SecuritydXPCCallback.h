//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/SecuritydXPCCallbackProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol>
{
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)callCallback:(_Bool)arg1 error:(id)arg2;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

