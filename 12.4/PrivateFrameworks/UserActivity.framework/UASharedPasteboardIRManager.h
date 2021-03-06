//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UASharedPasteboardIRManager : NSObject
{
    NSMutableDictionary *_lookupTable;
}

+ (id)sharedIRManager;
@property(retain) NSMutableDictionary *lookupTable; // @synthesize lookupTable=_lookupTable;
- (void).cxx_destruct;
- (id)converterForType:(id)arg1;
- (void)registerIRHandlerClass:(Class)arg1 forType:(id)arg2;
- (id)registeredConverters;
- (void)initializeConverters;
- (id)init;

@end

