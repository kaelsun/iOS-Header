//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeSettingsUI/NSObject-Protocol.h>

@class STAllowance, STAllowanceDetailListController;

@protocol STAllowanceDetailListControllerDelegate <NSObject>
- (void)allowanceDetailController:(STAllowanceDetailListController *)arg1 didSaveAllowance:(STAllowance *)arg2;

@optional
- (void)allowanceDetailControllerDidCancel:(STAllowanceDetailListController *)arg1;
- (void)allowanceDetailController:(STAllowanceDetailListController *)arg1 didDeleteAllowance:(STAllowance *)arg2;
@end

