//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Task.h"

@class NSArray, NSDictionary, XPCRequestToken;

@interface InstallEnterpriseAppsTask : Task
{
    NSDictionary *_apps;
    _Bool _isXDCRequest;
    XPCRequestToken *_requestToken;
    NSArray *_processedExternalIDs;
}

+ (id)taskWithXPCAppMetadata:(id)arg1 requestToken:(id)arg2;
- (void).cxx_destruct;
- (void)main;
- (void)_setProcessedExternalIDs:(id)arg1;
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithEnterpriseApps:(id)arg1 isXDCRequest:(_Bool)arg2 requestToken:(id)arg3;

@end

