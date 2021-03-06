//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class HMDBackingStore, NSUUID;

@interface HMDBackingStoreOperation : NSOperation
{
    CDUnknownBlockType _resultBlock;
    NSUUID *_operationUUID;
    HMDBackingStore *_store;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMDBackingStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (id)description;
- (void)main;
- (id)mainReturningError;
- (id)init;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1;

@end

