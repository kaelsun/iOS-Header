//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSBaseMainController.h"

@class SVSCommonNavController, UIStoryboard, WatchSetupViewController;

@interface WatchSetupViewControllerProxy : SVSBaseMainController
{
    _Bool _dismissed;
    SVSCommonNavController *_navController;
    WatchSetupViewController *_setupViewController;
    UIStoryboard *_storyboard;
}

- (void).cxx_destruct;
- (void)handleButtonActions:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

