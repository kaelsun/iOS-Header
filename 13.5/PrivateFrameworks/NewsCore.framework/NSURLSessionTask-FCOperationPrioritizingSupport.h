//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSessionTask.h>

#import <NewsCore/FCOperationIdentifying-Protocol.h>
#import <NewsCore/FCOperationPrioritizing-Protocol.h>

@class NSString;

@interface NSURLSessionTask (FCOperationPrioritizingSupport) <FCOperationPrioritizing, FCOperationIdentifying>
@property(nonatomic) long long relativePriority;
- (id)longOperationDescription;
- (id)shortOperationDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

