//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSValue, PLManagedAsset;

@interface PLManagedLegacyFace : PLManagedObject
{
}

+ (id)entityName;
- (void)delete;
@property(nonatomic) struct CGRect relativeRect;

// Remaining properties
@property(retain, nonatomic) NSString *albumUUID; // @dynamic albumUUID;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(nonatomic) short identifier; // @dynamic identifier;
@property(retain, nonatomic) NSValue *relativeRectValue; // @dynamic relativeRectValue;

@end

