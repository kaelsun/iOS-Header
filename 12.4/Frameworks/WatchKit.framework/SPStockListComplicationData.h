//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchKit/SPComplicationData.h>

#import <WatchKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SPStockListComplicationData : SPComplicationData <NSSecureCoding>
{
    NSArray *_stockList;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *stockList; // @synthesize stockList=_stockList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

