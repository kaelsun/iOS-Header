//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RetrievingDialogDelegate-Protocol.h"

@class NSURL, RetrievingDialog, VettingHandler;

@interface VettingAcceptor : NSObject <RetrievingDialogDelegate>
{
    _Bool _cancelled;
    unsigned long long _backgroundTaskID;
    NSURL *_url;
    VettingHandler *_vettingHandler;
    RetrievingDialog *_retrievingDialog;
}

@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, retain, nonatomic) RetrievingDialog *retrievingDialog; // @synthesize retrievingDialog=_retrievingDialog;
@property(readonly, retain, nonatomic) VettingHandler *vettingHandler; // @synthesize vettingHandler=_vettingHandler;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)completeVettingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)retrievingDialogCancelled;
- (_Bool)retrievingDialogShouldDisplay;
- (id)initWithCloudKitURL:(id)arg1;

@end

