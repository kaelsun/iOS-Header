//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class APUILongLookViewController;

@protocol APUILongLookViewControllerDelegate <NSObject>
- (void)longLookPlatterDidReceiveTap:(APUILongLookViewController *)arg1;

@optional
- (void)longLookPlatterDidTapUtilityButton:(APUILongLookViewController *)arg1;
- (_Bool)longLookPlatterShouldShowUtilityButton:(APUILongLookViewController *)arg1;
@end

