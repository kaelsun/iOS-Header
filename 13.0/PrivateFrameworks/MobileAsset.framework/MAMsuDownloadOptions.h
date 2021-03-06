//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileAsset/MADownloadOptions.h>

@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions
{
    _Bool _supervised;
    _Bool _allowSameVersion;
    NSString *_requestedProductVersion;
    long long _delayPeriod;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool allowSameVersion; // @synthesize allowSameVersion=_allowSameVersion;
@property(nonatomic) _Bool supervised; // @synthesize supervised=_supervised;
@property(nonatomic) long long delayPeriod; // @synthesize delayPeriod=_delayPeriod;
@property(retain, nonatomic) NSString *requestedProductVersion; // @synthesize requestedProductVersion=_requestedProductVersion;
- (void)logOptions;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

