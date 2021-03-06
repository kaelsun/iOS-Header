//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CPSNavigationAlertQueue, CPSNavigationAlertView;

@protocol CPSNavigationAlertQueueDelegate <NSObject>
- (_Bool)canAnimateNavigationAlert;
- (void)navigationAlertQueue:(CPSNavigationAlertQueue *)arg1 shouldRemoveAlertView:(CPSNavigationAlertView *)arg2 animated:(_Bool)arg3 dismissalContext:(unsigned long long)arg4 completion:(void (^)(void))arg5;
- (void)navigationAlertQueue:(CPSNavigationAlertQueue *)arg1 shouldDisplayAlertView:(CPSNavigationAlertView *)arg2 animated:(_Bool)arg3;
@end

