//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMRelatedContentImage : FATObject
{
    NSString *_url;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_pixelRatio;
    NSNumber *_fileSize;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSNumber *pixelRatio; // @synthesize pixelRatio=_pixelRatio;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

