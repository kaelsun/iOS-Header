//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSData, NSString, _INPBURLValue;

@protocol _INPBFile <NSObject>
@property(readonly, nonatomic) _Bool hasTypeIdentifier;
@property(copy, nonatomic) NSString *typeIdentifier;
@property(readonly, nonatomic) _Bool hasFilename;
@property(copy, nonatomic) NSString *filename;
@property(readonly, nonatomic) _Bool hasFileURL;
@property(retain, nonatomic) _INPBURLValue *fileURL;
@property(readonly, nonatomic) _Bool hasData;
@property(copy, nonatomic) NSData *data;
@end

