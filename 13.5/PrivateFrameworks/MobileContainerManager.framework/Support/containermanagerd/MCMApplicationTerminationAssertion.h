//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSApplicationTerminationAssertion;

@interface MCMApplicationTerminationAssertion : NSObject
{
    FBSApplicationTerminationAssertion *_termAssertion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBSApplicationTerminationAssertion *termAssertion; // @synthesize termAssertion=_termAssertion;
- (void)dealloc;
- (void)invalidate;
- (id)initWithBundleIdentifier:(id)arg1 reason:(unsigned char)arg2;

@end

