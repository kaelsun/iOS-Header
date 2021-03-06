//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Celestial/FigXPCCoding-Protocol.h>
#import <Celestial/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSMutableArray *_connections;
    long long _configurationID;
    _Bool _usesAppAudioSession;
    _Bool _configuresAppAudioSession;
    _Bool _allowedToRunInWindowedLayout;
}

+ (void)initialize;
@property(nonatomic) _Bool allowedToRunInWindowedLayout; // @synthesize allowedToRunInWindowedLayout=_allowedToRunInWindowedLayout;
@property(nonatomic) _Bool configuresAppAudioSession; // @synthesize configuresAppAudioSession=_configuresAppAudioSession;
@property(nonatomic) _Bool usesAppAudioSession; // @synthesize usesAppAudioSession=_usesAppAudioSession;
@property(nonatomic) long long configurationID; // @synthesize configurationID=_configurationID;
@property(readonly, nonatomic) NSArray *sinkConfigurations;
@property(readonly, nonatomic) NSArray *sourceConfigurations;
@property(readonly, nonatomic) NSArray *connectionConfigurations;
- (void)removeConnectionConfiguration:(id)arg1;
- (void)addConnectionConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

