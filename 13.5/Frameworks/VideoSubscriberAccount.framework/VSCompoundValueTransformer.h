//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSArray;

@interface VSCompoundValueTransformer : NSValueTransformer
{
    NSArray *_valueTransformers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *valueTransformers; // @synthesize valueTransformers=_valueTransformers;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;

@end

