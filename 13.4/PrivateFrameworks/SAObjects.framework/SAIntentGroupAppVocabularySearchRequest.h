//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAIntentGroupAppVocabularySearchRequest : SABaseClientBoundCommand <SAAceSerializable>
{
}

+ (id)appVocabularySearchRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appVocabularySearchRequest;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *query;
@property(copy, nonatomic) NSString *appVocabularyType;
@property(copy, nonatomic) NSString *appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

