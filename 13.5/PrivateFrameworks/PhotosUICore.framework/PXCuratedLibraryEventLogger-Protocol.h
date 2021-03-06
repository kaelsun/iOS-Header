//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject;
@protocol PXAnonymousViewController;

@protocol PXCuratedLibraryEventLogger <NSObject>
- (void)logAnalysisProgress:(float)arg1;
- (void)logLibraryItemsCount:(long long)arg1;
- (void)logViewControllerDidDisappear:(NSObject<PXAnonymousViewController> *)arg1;
- (void)logViewControllerWillAppear:(NSObject<PXAnonymousViewController> *)arg1;
@end

