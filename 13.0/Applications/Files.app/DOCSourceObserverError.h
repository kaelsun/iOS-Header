//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSArray, NSString;

@interface DOCSourceObserverError : NSError
{
    NSArray *_underlyingErrors;
}

+ (id)observerErrorWithUnderlyingErrors:(id)arg1;
@property(retain) NSArray *underlyingErrors; // @synthesize underlyingErrors=_underlyingErrors;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *description;

@end

