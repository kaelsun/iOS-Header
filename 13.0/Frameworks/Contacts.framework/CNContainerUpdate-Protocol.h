//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class CNContainerPropertyDescription, CNMutableContainer;

@protocol CNContainerUpdate <NSObject>
- (void)applyToMutableContainer:(CNMutableContainer *)arg1;
- (id)value;
- (CNContainerPropertyDescription *)property;
@end

