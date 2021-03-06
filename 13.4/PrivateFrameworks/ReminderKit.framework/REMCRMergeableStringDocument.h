//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString, REMReplicaIDSource, TTMergeableStringVersionedDocument;

@interface REMCRMergeableStringDocument : NSObject <NSCopying, NSSecureCoding>
{
    REMReplicaIDSource *_replicaIDSource;
    TTMergeableStringVersionedDocument *_document;
}

+ (_Bool)supportsSecureCoding;
+ (id)documentFromSerializedData:(id)arg1 replicaIDSource:(id)arg2 forKey:(id)arg3 ofObjectID:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) TTMergeableStringVersionedDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) REMReplicaIDSource *replicaIDSource; // @synthesize replicaIDSource=_replicaIDSource;
- (id)mergedWithDocument:(id)arg1 error:(id *)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)serializedData;
- (id)mutableDocument;
@property(readonly, nonatomic) NSString *string;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReplicaIDSource:(id)arg1 document:(id)arg2;
- (id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id *)arg3;
- (id)initWithReplicaIDSource:(id)arg1 string:(id)arg2;

@end

