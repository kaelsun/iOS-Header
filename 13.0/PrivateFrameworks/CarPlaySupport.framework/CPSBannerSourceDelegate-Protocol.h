//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CPSBannerSource, NSUUID;

@protocol CPSBannerSourceDelegate <NSObject>
- (void)bannerSource:(CPSBannerSource *)arg1 bannerDidDisappearWithIdentifier:(NSUUID *)arg2;
- (void)bannerSource:(CPSBannerSource *)arg1 bannerDidAppearWithIdentifier:(NSUUID *)arg2;
- (void)bannerSource:(CPSBannerSource *)arg1 bannerTappedWithIdentifier:(NSUUID *)arg2;
@end

