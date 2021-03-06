//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SGDSuggestManagerMessagesProtocol;

@interface SGMessagesDaemonConnection : NSObject
{
    NSMutableDictionary *_contextSent;
    id <SGDSuggestManagerMessagesProtocol> _remoteSuggestionManager;
}

- (void).cxx_destruct;
- (void)setManagerForTesting:(id)arg1;
- (id)remoteSuggestionManager;
- (void)didSendContextForConversation:(id)arg1;
- (_Bool)hasContextBeenSentForConversation:(id)arg1;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)initWithDaemonConnection:(id)arg1;

@end

