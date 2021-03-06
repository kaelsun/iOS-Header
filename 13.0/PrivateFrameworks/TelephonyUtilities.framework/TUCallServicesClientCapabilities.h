//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@protocol TUCallServicesClientCapabilitiesActions;

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>
{
    _Bool _wantsCallDisconnectionOnInvalidation;
    _Bool _wantsFrequencyChangeNotifications;
    id <TUCallServicesClientCapabilitiesActions> _delegate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <TUCallServicesClientCapabilitiesActions> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool wantsFrequencyChangeNotifications; // @synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications;
@property(nonatomic) _Bool wantsCallDisconnectionOnInvalidation; // @synthesize wantsCallDisconnectionOnInvalidation=_wantsCallDisconnectionOnInvalidation;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;

@end

