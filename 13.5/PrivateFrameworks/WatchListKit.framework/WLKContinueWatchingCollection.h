//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WLKContinueWatchingCollection : NSObject
{
    NSString *_collectionID;
    NSString *_title;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

