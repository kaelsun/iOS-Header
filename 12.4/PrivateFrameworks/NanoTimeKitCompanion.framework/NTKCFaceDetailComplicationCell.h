//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NSString, NTKComplication;

@interface NTKCFaceDetailComplicationCell : NTKCDetailTableViewCell
{
    _Bool _dateSlot;
    _Bool _active;
    _Bool _enabled;
    NSString *_slot;
    NTKComplication *_complication;
}

+ (id)reuseIdentifier;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) _Bool dateSlot; // @synthesize dateSlot=_dateSlot;
@property(retain, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;
@property(readonly, nonatomic) NSString *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (id)_activeColor;
- (id)_inactiveColor;
- (id)_disabledColor;
- (void)_updateState;
- (void)_updateDetailText;
- (id)initWithSlot:(id)arg1 dateSlot:(_Bool)arg2 inFace:(id)arg3;
- (double)rowHeight;

@end

