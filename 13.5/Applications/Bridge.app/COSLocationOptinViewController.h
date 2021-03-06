//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSOptinViewController.h"

#import "COSUnifiedFYIOptinController-Protocol.h"

@class NSString;

@interface COSLocationOptinViewController : COSOptinViewController <COSUnifiedFYIOptinController>
{
}

+ (void)authorizeLocationForWatchFaces;
+ (_Bool)controllerNeedsToRun;
+ (_Bool)locationRestricted;
+ (_Bool)locationServicesEnabled;
+ (void)doWorkForSkippedPane;
+ (_Bool)wantsUnifiedFYI;
- (void)learnMoreButtonPressed:(id)arg1;
- (id)detailTitleString;
- (id)learnMoreButtonTitle;
- (id)alternateButtonTitle;
- (id)suggestedButtonTitle;
- (void)applyConfirmedOptin:(_Bool)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (void)suggestedButtonPressed:(id)arg1;
- (id)imageResource;
- (id)detailString;
- (id)titleString;
- (_Bool)wantsLightenBlendedScreen;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

