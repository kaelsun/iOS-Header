//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFApplicationInfo : NSObject <NSSecureCoding>
{
    int _pid;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

