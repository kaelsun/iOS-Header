//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTIDStorage-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MTIDMemoryStorage : NSObject <MTIDStorage>
{
    NSMutableDictionary *_namespaces;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *namespaces; // @synthesize namespaces=_namespaces;
- (id)optionsForNamespace:(id)arg1 cachePolicy:(long long)arg2;
- (id)deleteNamespace:(id)arg1;
- (id)updateNamespace:(id)arg1 options:(id)arg2 resetSeed:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

