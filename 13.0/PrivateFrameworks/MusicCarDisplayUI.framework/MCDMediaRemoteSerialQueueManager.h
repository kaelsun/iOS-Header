//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface MCDMediaRemoteSerialQueueManager : NSObject
{
    NSOperationQueue *_mediaRemoteSerialQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *mediaRemoteSerialQueue; // @synthesize mediaRemoteSerialQueue=_mediaRemoteSerialQueue;
- (void).cxx_destruct;
- (void)addOperation:(CDUnknownBlockType)arg1 cancelAllOperations:(_Bool)arg2;
- (void)cancelAllOperations;
- (id)init;

@end

