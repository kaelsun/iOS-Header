//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@interface SBUIRemoteAlertButtonAction : BSAction
{
}

- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (void)sendResponseWithUnHandledEvents:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long events;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithEvents:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithEvents:(unsigned long long)arg1;

@end

