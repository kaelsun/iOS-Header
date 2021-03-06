//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXHearingSupport/AXUIClientDelegate-Protocol.h>
#import <AXHearingSupport/TTYCallDelegate-Protocol.h>
#import <AXHearingSupport/TUCallCapabilitiesDelegate-Protocol.h>

@class AXUIClient, NSMutableArray, NSString;

@interface AXTTYController : NSObject <AXUIClientDelegate, TTYCallDelegate, TUCallCapabilitiesDelegate>
{
    AXUIClient *_actionUIClient;
    _Bool _shouldSuppressIncomingNotification;
    NSMutableArray *_ttyCalls;
    CDUnknownBlockType _actionCompletionBlock;
}

+ (id)sharedController;
@property(nonatomic) _Bool shouldSuppressIncomingNotification; // @synthesize shouldSuppressIncomingNotification=_shouldSuppressIncomingNotification;
@property(copy, nonatomic) CDUnknownBlockType actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
@property(retain, nonatomic) NSMutableArray *ttyCalls; // @synthesize ttyCalls=_ttyCalls;
- (void).cxx_destruct;
- (void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3;
- (id)handleIncomingNotificationSuppressionChange:(id)arg1;
- (id)displayCallPrompt:(id)arg1;
- (id)handleSettingsRequest:(id)arg1;
- (id)handleDictionaryRequest:(id)arg1;
- (id)handleDatabaseRequest:(id)arg1;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (id)actionClient;
- (void)dealloc;
- (void)displayRTTFirstUseAlert;
- (void)dismissRTTFirstUseAlert;
- (id)callForUUID:(id)arg1;
- (void)handleUpdatedCalls:(id)arg1;
- (void)callDidConnect:(id)arg1;
- (void)telephonySupportDidChange:(id)arg1;
- (void)didChangeFaceTimeVideoCallingSupport;
- (void)didChangeFaceTimeAudioCallingSupport;
- (void)didChangeTelephonyCallingSupport;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

