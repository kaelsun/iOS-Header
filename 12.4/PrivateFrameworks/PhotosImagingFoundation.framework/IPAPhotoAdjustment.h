//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAAdjustment.h>

@class NSDictionary, NSString;

@interface IPAPhotoAdjustment : IPAAdjustment
{
    _Bool _enabled;
    NSString *_maskUUID;
    NSDictionary *_autoSettings;
}

@property(retain, nonatomic) NSDictionary *autoSettings; // @synthesize autoSettings=_autoSettings;
@property(retain, nonatomic) NSString *maskUUID; // @synthesize maskUUID=_maskUUID;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

