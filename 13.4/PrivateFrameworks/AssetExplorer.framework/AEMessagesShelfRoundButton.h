//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <AssetExplorer/PXReusableObject-Protocol.h>

@interface AEMessagesShelfRoundButton : UIButton <PXReusableObject>
{
}

+ (struct CGSize)intrinsicContentSizeForStyle:(long long)arg1;
+ (struct CGSize)preferredTapRegionSizeForStyle:(long long)arg1;
+ (id)_imageForStyle:(long long)arg1;
+ (id)roundButtonWithStyle:(long long)arg1;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)_commonAEMessagesRoundButtonInitializationWithStyle:(long long)arg1;

@end

