//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol MPMiddlewareOperation <NSObject>
@property(readonly, nonatomic) NSArray *invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property(readonly, nonatomic) NSError *error;

@optional
- (NSString *)timeoutDescription;
@end

