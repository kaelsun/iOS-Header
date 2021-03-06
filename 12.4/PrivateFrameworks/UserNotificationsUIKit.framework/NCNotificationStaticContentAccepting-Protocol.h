//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/PLTitled-Protocol.h>

@class NSArray, NSString, UIImage, UIView;

@protocol NCNotificationStaticContentAccepting <PLTitled>
@property(retain, nonatomic) NSArray *interfaceActions;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primarySubtitleText;
@property(copy, nonatomic) NSString *primaryText;

@optional
@property(nonatomic) unsigned long long messageNumberOfLines;
@property(retain, nonatomic) UIView *accessoryView;
@property(retain, nonatomic) UIImage *thumbnail;
@property(copy, nonatomic) NSString *summaryText;
@end

