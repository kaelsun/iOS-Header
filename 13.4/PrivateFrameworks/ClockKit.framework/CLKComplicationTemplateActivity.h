//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateActivity : CLKComplicationTemplate
{
    long long _family;
    _Bool _hideDots;
    double _movePercentComplete;
    double _exercisePercentComplete;
    double _standPercentComplete;
}

+ (id)activityTemplateWithFamily:(long long)arg1;
@property(nonatomic, getter=dotsAreHidden) _Bool hideDots; // @synthesize hideDots=_hideDots;
@property(nonatomic) double standPercentComplete; // @synthesize standPercentComplete=_standPercentComplete;
@property(nonatomic) double exercisePercentComplete; // @synthesize exercisePercentComplete=_exercisePercentComplete;
@property(nonatomic) double movePercentComplete; // @synthesize movePercentComplete=_movePercentComplete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;

@end

