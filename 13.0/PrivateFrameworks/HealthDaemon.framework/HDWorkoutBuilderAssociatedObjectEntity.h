//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity
{
}

+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (_Bool)removeAssociationFromBuilder:(id)arg1 toUUID:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)enumerateAssociatedUUIDsForBuilder:(id)arg1 transaction:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
+ (long long)associateObject:(id)arg1 withBuilder:(id)arg2 transaction:(id)arg3 error:(id *)arg4;

@end

