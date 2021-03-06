//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUDoubleTapZoomController, PUOneUpDragController, PUTilingView, UIGestureRecognizer, UIView;
@protocol PUDisplayLocationProvider, UIGestureRecognizerDelegate;

@protocol PUDoubleTapZoomControllerDelegate <NSObject>

@optional
- (PUOneUpDragController *)oneUpDragControllerForDoubleTapZoomController:(PUDoubleTapZoomController *)arg1;
- (_Bool)doubleTapZoomController:(PUDoubleTapZoomController *)arg1 canDoubleTapBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (id <UIGestureRecognizerDelegate>)doubleTapZoomController:(PUDoubleTapZoomController *)arg1 delegateForGestureRecognizer:(UIGestureRecognizer *)arg2;
- (PUTilingView *)doubleTapZoomControllerTilingView:(PUDoubleTapZoomController *)arg1;
- (UIView *)doubleTapZoomControllerViewHostingGestureRecognizers:(PUDoubleTapZoomController *)arg1;
@end

