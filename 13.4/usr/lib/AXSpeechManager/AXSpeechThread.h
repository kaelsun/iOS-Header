//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSPort, NSRunLoop;

@interface AXSpeechThread : NSThread
{
    NSPort *_machPort;
    NSRunLoop *_threadRunLoop;
}

- (void).cxx_destruct;
- (void)stop;
- (void)cancel;
- (void)main;
- (id)init;

@end

