//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IDSServiceDelegate-Protocol.h>

@class IDSService, NSString;

@interface IMDLegactDTController : NSObject <IDSServiceDelegate>
{
    IDSService *_dtService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IDSService *dtService; // @synthesize dtService=_dtService;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)_senderIDFromToken:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

