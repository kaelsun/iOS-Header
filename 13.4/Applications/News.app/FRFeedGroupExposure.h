//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, NSString;

@interface FRFeedGroupExposure : NSObject
{
    NSString *_sectionID;
    NSDate *_startDate;
    NSMutableSet *_seenItemIndices;
    NSString *_groupExposureID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *groupExposureID; // @synthesize groupExposureID=_groupExposureID;
@property(readonly, nonatomic) NSMutableSet *seenItemIndices; // @synthesize seenItemIndices=_seenItemIndices;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (id)initWithSectionID:(id)arg1 groupExposureID:(id)arg2 startDate:(id)arg3;

@end

