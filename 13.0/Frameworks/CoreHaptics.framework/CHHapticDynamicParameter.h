//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CHHapticDynamicParameter : NSObject
{
    NSString *_param;
    float _value;
    double _time;
}

@property double relativeTime; // @synthesize relativeTime=_time;
@property float value; // @synthesize value=_value;
@property(readonly) NSString *parameterID; // @synthesize parameterID=_param;
- (void).cxx_destruct;
- (id)initWithParameterID:(id)arg1 value:(float)arg2 relativeTime:(double)arg3;
- (id)init;

@end

