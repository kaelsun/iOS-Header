//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/NSCopying-Protocol.h>
#import <SafariServices/NSSecureCoding-Protocol.h>

@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _ephemeral;
    _Bool _entersReaderIfAvailable;
    _Bool _barCollapsingEnabled;
    long long _redirectNotificationBehavior;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool barCollapsingEnabled; // @synthesize barCollapsingEnabled=_barCollapsingEnabled;
@property(nonatomic) _Bool entersReaderIfAvailable; // @synthesize entersReaderIfAvailable=_entersReaderIfAvailable;
@property(nonatomic) long long _redirectNotificationBehavior; // @synthesize _redirectNotificationBehavior;
- (void)_setEphemeral:(_Bool)arg1;
- (_Bool)_isEphemeral;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

