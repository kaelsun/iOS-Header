//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort
{
    TSgPTPPortStatistics *_statistics;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
@property(retain, nonatomic) TSgPTPPortStatistics *statistics; // @synthesize statistics=_statistics;
- (void)dealloc;
- (id)_statistics;
- (void)updateProperties;
- (_Bool)_commonInitWithService:(unsigned int)arg1;

@end

