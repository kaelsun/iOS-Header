//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CPAnalyticsMetricEventRoute : NSObject
{
    NSString *_destination;
    NSString *_destinationEventKey;
    NSArray *_propertiesToInclude;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *propertiesToInclude; // @synthesize propertiesToInclude=_propertiesToInclude;
@property(readonly, nonatomic) NSString *destinationEventKey; // @synthesize destinationEventKey=_destinationEventKey;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (id)initWithConfig:(id)arg1;

@end

