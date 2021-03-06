//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions
{
    _Bool _shouldHideUserPrompts;
    NSURL *_manifestURL;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldHideUserPrompts; // @synthesize shouldHideUserPrompts=_shouldHideUserPrompts;
@property(readonly, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;

@end

