//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface ARScreenRecording : NSObject
{
    _Bool _saveInPhotosLibrary;
    UIViewController *_parentViewController;
}

@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool saveInPhotosLibrary; // @synthesize saveInPhotosLibrary=_saveInPhotosLibrary;
- (void).cxx_destruct;
- (void)alertUserWithTitle:(id)arg1 message:(id)arg2;
- (void)stop;
- (void)start;
- (id)initWith:(id)arg1;

@end

