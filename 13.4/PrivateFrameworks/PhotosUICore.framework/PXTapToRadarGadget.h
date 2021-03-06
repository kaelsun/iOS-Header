//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXGadgetSpec, UIButton;
@protocol PXGadgetDelegate;

@interface PXTapToRadarGadget : UIView <PXGadget>
{
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    UIButton *_tapToRadarButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *tapToRadarButton; // @synthesize tapToRadarButton=_tapToRadarButton;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void)_tapToRadarTapped:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)contentView;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end

