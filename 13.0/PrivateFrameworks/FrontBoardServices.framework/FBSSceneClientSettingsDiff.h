//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSettingsDiff.h>

@interface FBSSceneClientSettingsDiff : FBSSettingsDiff
{
}

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;
- (void)evaluateWithInspector:(id)arg1 context:(void *)arg2;

@end

