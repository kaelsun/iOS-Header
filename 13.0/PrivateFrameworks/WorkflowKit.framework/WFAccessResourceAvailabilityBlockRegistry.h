//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFAccessResourceAvailabilityBlockRegistry : NSObject
{
}

+ (void)rediscoverAvailabilityBlocksIfNeeded;
+ (void)setRemoteServerAccessResourceAvailabilityBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)remoteServerAccessResourceAvailabilityBlock;
+ (void)setContactAccessResourceAvailabilityBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)contactAccessResourceAvailabilityBlock;

@end

