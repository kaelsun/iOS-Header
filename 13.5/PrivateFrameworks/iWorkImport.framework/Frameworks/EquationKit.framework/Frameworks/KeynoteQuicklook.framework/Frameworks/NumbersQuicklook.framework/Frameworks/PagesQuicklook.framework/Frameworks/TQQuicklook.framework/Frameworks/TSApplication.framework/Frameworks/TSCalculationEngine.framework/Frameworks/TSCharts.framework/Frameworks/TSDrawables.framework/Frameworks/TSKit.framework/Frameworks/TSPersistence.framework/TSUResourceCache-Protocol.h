//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/NSObject-Protocol.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue, TSUResourceInfo;

@protocol TSUResourceCache <NSObject>
- (void)purge;
- (void)cacheResourceAtURL:(NSURL *)arg1 forInfo:(id <TSUResourceInfo>)arg2 copy:(_Bool)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
- (_Bool)cachedResourceExistsForInfo:(id <TSUResourceInfo>)arg1;
@end

