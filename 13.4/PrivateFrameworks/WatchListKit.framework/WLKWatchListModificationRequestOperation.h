//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKWatchListModificationResponse;

@interface WLKWatchListModificationRequestOperation : WLKUTSNetworkRequestOperation
{
    unsigned long long _action;
    NSString *_itemID;
    WLKWatchListModificationResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WLKWatchListModificationResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)processResponse;
- (id)initWithAction:(unsigned long long)arg1 channelID:(id)arg2 externalID:(id)arg3 caller:(id)arg4;
- (id)initWithAction:(unsigned long long)arg1 identifier:(id)arg2 caller:(id)arg3;
- (id)initWithAction:(unsigned long long)arg1 statsID:(id)arg2 caller:(id)arg3;
- (id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2 caller:(id)arg3;

@end

