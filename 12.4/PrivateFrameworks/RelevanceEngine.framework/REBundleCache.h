//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REConcurrentDictionary;

@interface REBundleCache : NSObject
{
    REConcurrentDictionary *_cachedBundles;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)bundleAtPath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

