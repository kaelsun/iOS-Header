//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsSettings/NSCopying-Protocol.h>
#import <UserNotificationsSettings/NSSecureCoding-Protocol.h>

@class NSString, UNNotificationIcon, UNNotificationSourceSettings;

@interface UNNotificationSource : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isHiddenFromSettings;
    NSString *_sourceIdentifier;
    NSString *_displayName;
    UNNotificationIcon *_icon;
    UNNotificationSourceSettings *_sourceSettings;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) UNNotificationSourceSettings *sourceSettings; // @synthesize sourceSettings=_sourceSettings;
@property(readonly, copy, nonatomic) UNNotificationIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) _Bool isHiddenFromSettings; // @synthesize isHiddenFromSettings=_isHiddenFromSettings;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 isHidden:(_Bool)arg2 displayName:(id)arg3 icon:(id)arg4 settings:(id)arg5;

@end

