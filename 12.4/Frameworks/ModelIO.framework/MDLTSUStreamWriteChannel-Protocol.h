//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLTSUIOChannel-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data;

@protocol MDLTSUStreamWriteChannel <MDLTSUIOChannel>
- (void)flushWithCompletion:(void (^)(NSError *))arg1;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg2;
@end

