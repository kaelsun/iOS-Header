//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BrowserController, TabDocument;

@interface UserActivityController : NSObject
{
    BrowserController *_browserController;
    TabDocument *_tabDocumentPendingUserActivityPayload;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TabDocument *tabDocumentPendingUserActivityPayload; // @synthesize tabDocumentPendingUserActivityPayload=_tabDocumentPendingUserActivityPayload;
@property(readonly, nonatomic) __weak BrowserController *browserController; // @synthesize browserController=_browserController;
- (void)_prepareTabDocumentForNewUserActivity;
- (void)didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;
- (_Bool)continueUserActivity:(id)arg1;
- (_Bool)willContinueUserActivityWithType:(id)arg1;
- (id)initWithBrowserController:(id)arg1;

@end

