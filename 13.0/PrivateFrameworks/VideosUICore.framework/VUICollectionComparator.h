//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUICollectionComparator : NSObject
{
}

+ (id)_movedIdentifiersWithSourceIdentifiers:(id)arg1 destinationIdentifiers:(id)arg2;
+ (id)_indexByIdentifierDictionaryWithIdentifiers:(id)arg1;
+ (id)_identifiersWithObjects:(id)arg1 identifierBlock:(CDUnknownBlockType)arg2;
- (id)_changeSetWithSourceObjects:(id)arg1 destinationObjects:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3 isEqualBlock:(CDUnknownBlockType)arg4 updateChangeSetBlock:(CDUnknownBlockType)arg5;
- (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3 updateChangeSetBlock:(CDUnknownBlockType)arg4;
- (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3 isEqualBlock:(CDUnknownBlockType)arg4;

@end

