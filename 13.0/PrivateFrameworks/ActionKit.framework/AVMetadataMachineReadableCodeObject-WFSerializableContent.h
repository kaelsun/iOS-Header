//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMetadataMachineReadableCodeObject.h>

#import <ActionKit/WFEqualityTesting-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>
#import <ActionKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface AVMetadataMachineReadableCodeObject (WFSerializableContent) <WFSerializableContent, WFEqualityTesting, WFNaming>
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
- (id)wfSerializedRepresentation;
- (_Bool)wfIsEquivalentTo:(id)arg1;
@property(readonly, copy, nonatomic) NSString *wfName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

