//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsTablePanel.h"

@class CARSettingsCellSpecifier, NSArray;

@interface CARDisplayPanel : CARSettingsTablePanel
{
    CARSettingsCellSpecifier *_cellSpecifier;
    NSArray *_cellSpecifiers;
    NSArray *_panels;
}

@property(readonly, nonatomic) NSArray *panels; // @synthesize panels=_panels;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)cellSpecifiers;
- (id)cellSpecifier;
- (id)initWithPanelController:(id)arg1;

@end

