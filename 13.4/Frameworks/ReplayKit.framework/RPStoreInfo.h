//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RPStoreInfo : NSObject
{
    NSString *_bundleID;
    NSString *_appName;
    NSString *_author;
    NSString *_itemURL;
    NSArray *_categories;
    NSArray *_artworkDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *artworkDictionary; // @synthesize artworkDictionary=_artworkDictionary;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *itemURL; // @synthesize itemURL=_itemURL;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)dictionary;

@end

