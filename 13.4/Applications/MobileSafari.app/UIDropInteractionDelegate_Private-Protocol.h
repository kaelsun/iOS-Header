//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIDropInteractionDelegate-Protocol.h"

@class UIDragItem, UIDropInteraction;
@protocol UIDropSession;

@protocol UIDropInteractionDelegate_Private <UIDropInteractionDelegate>

@optional
- (void)_dropInteraction:(UIDropInteraction *)arg1 delayedPreviewProviderForDroppingItem:(UIDragItem *)arg2 previewProvider:(void (^)(UITargetedDragPreview *))arg3;
- (long long)_dropInteraction:(UIDropInteraction *)arg1 dataOwnerForSession:(id <UIDropSession>)arg2;
@end

