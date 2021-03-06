//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXBasicTileAnimationOptions : NSObject <NSCopying>
{
    _Bool _shouldNotifyTiles;
    _Bool _shouldSnapshotDynamicContents;
    double _delay;
    double _duration;
    long long _style;
    unsigned long long _flags;
}

+ (id)defaultAnimationOptions;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) _Bool shouldSnapshotDynamicContents; // @synthesize shouldSnapshotDynamicContents=_shouldSnapshotDynamicContents;
@property(nonatomic) _Bool shouldNotifyTiles; // @synthesize shouldNotifyTiles=_shouldNotifyTiles;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

