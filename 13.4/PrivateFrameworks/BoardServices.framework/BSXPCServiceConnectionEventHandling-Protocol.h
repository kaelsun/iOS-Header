//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BoardServices/NSObject-Protocol.h>

@class BSXPCServiceConnection, NSError;
@protocol BSXPCServiceConnectionMessage;

@protocol BSXPCServiceConnectionEventHandling <NSObject>
- (void)connectionInvalidated:(BSXPCServiceConnection *)arg1;
- (void)connectionInterrupted:(BSXPCServiceConnection *)arg1;
- (void)connectionActivated:(BSXPCServiceConnection *)arg1;
- (void)connection:(BSXPCServiceConnection *)arg1 handleMessage:(id <BSXPCServiceConnectionMessage>)arg2;
- (void)connection:(BSXPCServiceConnection *)arg1 handleError:(NSError *)arg2;
- (void)connectionHandleNoMoreChildren:(BSXPCServiceConnection *)arg1;
- (void)connection:(BSXPCServiceConnection *)arg1 handleConnection:(BSXPCServiceConnection *)arg2;
@end

