//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPReplica, NSData;
@protocol MSPReplicaMergeOptions;

@protocol MSPPropertyListReplicaDataSerialization <NSObject>
@property(readonly, nonatomic) NSData *propertyListDataRepresentation;
- (id)replicaByMergingWithReplica:(MSPReplica *)arg1 mergeOptions:(id <MSPReplicaMergeOptions>)arg2 userVisibleEffectiveContentsChanged:(out _Bool *)arg3;
@end

