//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARLanguageDetectorAudioBuffer : NSObject
{
    shared_ptr_9e2bfca6 _buffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endAudio;
- (void)addAudioSamples:(const short *)arg1 count:(unsigned long long)arg2;
- (void)addAudioSampleData:(id)arg1;
- (id)_initWithAudioBuffer:(const shared_ptr_9e2bfca6 *)arg1;

@end

