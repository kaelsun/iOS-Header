//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, NSUUID;
@protocol NSItemProviderDataTransferDelegate, _NSItemProviderLoading;

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying>
{
    CDUnknownBlockType _previewImageHandler;
    NSMutableDictionary *_metadata;
    id <_NSItemProviderLoading> _loadOperator;
    NSMutableDictionary *_representationByType;
    NSMutableOrderedSet *_typeOrder;
    NSArray *_representations;
    NSMutableDictionary *_preferredRepresentationByType;
    NSUUID *_UUID;
    NSString *_suggestedName;
    NSString *_sanitizedSuggestedName;
    NSDictionary *_userInfo;
    id <NSItemProviderDataTransferDelegate> _dataTransferDelegate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property __weak id <NSItemProviderDataTransferDelegate> dataTransferDelegate; // @synthesize dataTransferDelegate=_dataTransferDelegate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSUUID *_UUID; // @synthesize _UUID;
@property(retain, nonatomic) NSMutableDictionary *_preferredRepresentationByType; // @synthesize _preferredRepresentationByType;
@property(readonly) NSArray *_representations; // @synthesize _representations;
@property(retain, nonatomic) NSMutableOrderedSet *_typeOrder; // @synthesize _typeOrder;
@property(retain, nonatomic) NSMutableDictionary *_representationByType; // @synthesize _representationByType;
@property(retain) id <_NSItemProviderLoading> _loadOperator; // @synthesize _loadOperator;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadItemOfClass:(Class)arg1 withLoadHandler:(CDUnknownBlockType)arg2 options:(id)arg3 coerceForCoding:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithItem:(id)arg1 typeIdentifier:(id)arg2;
- (_Bool)hasItemConformingToTypeIdentifier:(id)arg1;
- (id)description;
- (id)_loadObjectOfClass:(Class)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)loadObjectOfClass:(Class)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canLoadObjectOfClass:(Class)arg1;
- (void)registerObjectOfClass:(Class)arg1 visibility:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (void)registerObject:(id)arg1 visibility:(long long)arg2;
- (id)initWithObject:(id)arg1;
- (id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 visibility:(long long)arg3 loadHandler:(CDUnknownBlockType)arg4;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (_Bool)hasRepresentationConformingToTypeIdentifier:(id)arg1 fileOptions:(long long)arg2;
@property(readonly, copy) NSArray *registeredTypeIdentifiers; // @dynamic registeredTypeIdentifiers;
- (id)registeredTypeIdentifiersWithFileOptions:(long long)arg1;
@property(readonly, copy) NSString *_sanitizedSuggestedName; // @synthesize _sanitizedSuggestedName;
@property(copy) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)_metadataValueForKey:(id)arg1;
- (id)_representationForType:(id)arg1;
- (void)_setItemRepresentation:(id)arg1;
- (id)_representationConformingToType:(id)arg1;
- (id)representations;
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(CDUnknownBlockType)arg3;
- (void)_addRepresentationType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(CDUnknownBlockType)arg3;
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 visibility:(long long)arg3 loader:(CDUnknownBlockType)arg4;
- (id)_availableTypesWithFilterBlock:(CDUnknownBlockType)arg1;
- (_Bool)_hasRepresentationConformingToType:(id)arg1;
- (_Bool)_hasRepresentationOfType:(id)arg1;
- (id)_availableTypes;
- (void)dealloc;
- (id)init;
- (void)_commonInitGenerateUUID:(_Bool)arg1;
- (void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy) CDUnknownBlockType previewImageHandler; // @dynamic previewImageHandler;

@end

