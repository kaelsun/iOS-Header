//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMetadataItem, NSDictionary, NSString;

@interface MPTimedMetadata : NSObject
{
    AVMetadataItem *_metadataItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *allMetadata;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) id value;
@property(readonly, nonatomic) NSString *keyspace;
@property(readonly, nonatomic) NSString *key;
- (id)_initWithMetadataItem:(id)arg1;
- (id)init;

@end

