//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DOCConcreteLocation, FPItem, UIViewController;

@protocol _TtP5Files34DOCBrowserContainedActionReporting_
- (void)beginLoadingAdditionalParents:(void (^)(_Bool))arg1;
- (_Bool)canLoadAdditionalParents;
- (void)didFinishGatheringItemsAndThumbnailsWithSender:(UIViewController *)arg1;
- (void)didTapLocationOf:(FPItem *)arg1;
- (void)didCommitPreviewOf:(FPItem *)arg1;
- (void)didSelectLocation:(DOCConcreteLocation *)arg1 atParentLocation:(DOCConcreteLocation *)arg2;
- (void)didSelectItem:(FPItem *)arg1 atParentLocation:(DOCConcreteLocation *)arg2 wasAlreadySelected:(_Bool)arg3 onlyRevealIfColumn:(_Bool)arg4;
@end

