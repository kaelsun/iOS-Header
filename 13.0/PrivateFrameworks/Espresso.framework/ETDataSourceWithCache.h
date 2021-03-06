//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/ETDataSource-Protocol.h>

@protocol ETDataSource;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithCache : NSObject <ETDataSource>
{
    id <ETDataSource> _source;
    struct map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *>>> _cache;
    basic_string_23d93216 dump_path;
    _Bool dump_descriptors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1 dumpPath:(id)arg2;
- (id)initWithDataSource:(id)arg1;

@end

