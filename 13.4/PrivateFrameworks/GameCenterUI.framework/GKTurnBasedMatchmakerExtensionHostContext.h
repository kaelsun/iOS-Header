//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKExtensionHostContext.h>

#import <GameCenterUI/GKTurnBasedMatchmakerHostProtocol-Protocol.h>

@class GKGame, NSString;

@interface GKTurnBasedMatchmakerExtensionHostContext : GKExtensionHostContext <GKTurnBasedMatchmakerHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

