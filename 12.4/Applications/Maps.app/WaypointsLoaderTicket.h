//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface WaypointsLoaderTicket : NSObject
{
    id <GEOMapServiceTicket> _mapServiceTicket;
    _Bool _isCancelled;
}

@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) id <GEOMapServiceTicket> mapServiceTicket; // @synthesize mapServiceTicket=_mapServiceTicket;
- (void).cxx_destruct;
- (void)cancel;

@end

