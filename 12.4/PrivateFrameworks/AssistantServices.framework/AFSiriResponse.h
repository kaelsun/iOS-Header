//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding>
{
    NSUUID *_requestIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_isForRequest:(id)arg1;
- (id)_initWithRequest:(id)arg1;
- (id)_initWithRequestIdentifier:(id)arg1;

@end

