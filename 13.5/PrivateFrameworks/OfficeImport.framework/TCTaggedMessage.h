//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCTaggedMessage : NSObject
{
    int mMessageTag;
    NSString *mMessageText;
}

+ (id)taggedMessageWithMessageText:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *messageText; // @synthesize messageText=mMessageText;
@property(readonly, nonatomic) int messageTag; // @synthesize messageTag=mMessageTag;
- (id)initWithMessageText:(id)arg1;

@end

