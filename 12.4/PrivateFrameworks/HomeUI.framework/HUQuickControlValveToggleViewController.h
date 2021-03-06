//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFControlItem, HUQuickControlValveToggleView;
@protocol HFPrimaryStateWriter;

@interface HUQuickControlValveToggleViewController : HUQuickControlSingleControlViewController
{
    HUQuickControlValveToggleView *_controlView;
}

+ (Class)controlItemClass;
+ (id)controlItemPredicate;
@property(retain, nonatomic) HUQuickControlValveToggleView *controlView; // @synthesize controlView=_controlView;
- (void).cxx_destruct;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;

// Remaining properties
@property(readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *controlItem; // @dynamic controlItem;

@end

