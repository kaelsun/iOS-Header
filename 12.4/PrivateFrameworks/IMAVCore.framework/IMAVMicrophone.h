//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMAVMicrophone : NSObject
{
    id _internalDevice;
}

- (id)description;
@property(readonly, retain, nonatomic) NSString *uniqueID;
- (id)_AVAudioDevice;
@property(readonly, retain, nonatomic) NSString *name;
- (void)dealloc;
- (id)init;
- (id)_initWithAVAudioDevice:(id)arg1;

@end

