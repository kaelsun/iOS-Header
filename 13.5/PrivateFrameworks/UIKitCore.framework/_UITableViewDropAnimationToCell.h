//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITableViewDropAnimation.h>

@class UIDragPreviewParameters, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationToCell : _UITableViewDropAnimation
{
    UITableViewCell *_cell;
    UIDragPreviewParameters *_previewParameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIDragPreviewParameters *previewParameters; // @synthesize previewParameters=_previewParameters;
@property(nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
- (id)initWithDragItem:(id)arg1 cell:(id)arg2 previewParameters:(id)arg3;

@end

