//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosEditUI/NSObject-Protocol.h>

@class PUAdjustmentsMode, PUAdjustmentsModeBar;

@protocol PUAdjustmentsModeBarDelegate <NSObject>

@optional
- (void)adjustmentsModeBar:(PUAdjustmentsModeBar *)arg1 didTapModeToggle:(PUAdjustmentsMode *)arg2;
- (void)adjustmentsModeBarDidChangeModeListExpandedState:(PUAdjustmentsModeBar *)arg1;
- (void)adjustmentsModeBarDidChangeSelectedMode:(PUAdjustmentsModeBar *)arg1;
@end

