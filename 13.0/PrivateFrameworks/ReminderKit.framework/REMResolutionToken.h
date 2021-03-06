//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface REMResolutionToken : NSObject <NSSecureCoding, NSCopying>
{
    long long _counter;
    double _modificationTime;
    NSUUID *_replicaID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *replicaID; // @synthesize replicaID=_replicaID;
@property(nonatomic) double modificationTime; // @synthesize modificationTime=_modificationTime;
@property(nonatomic) long long counter; // @synthesize counter=_counter;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)update;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultValue;
- (id)init;
- (id)initWithCounter:(long long)arg1 modificationTime:(double)arg2 replicaID:(id)arg3;

@end

