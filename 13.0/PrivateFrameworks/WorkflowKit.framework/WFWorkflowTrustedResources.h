//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/RLMObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class RLMArray, RLMLinkingObjects;
@protocol WFRealmAccessResourcePermissionState, WFTrustedJavaScriptDomain;

@interface WFWorkflowTrustedResources : RLMObject <NSCopying>
{
    RLMArray<WFTrustedJavaScriptDomain> *_trustedDomains;
    RLMArray<WFRealmAccessResourcePermissionState> *_accessResourcePermissionStates;
    RLMLinkingObjects *_workflows;
}

+ (id)linkingObjectsProperties;
+ (id)requiredProperties;
@property(readonly) RLMLinkingObjects *workflows; // @synthesize workflows=_workflows;
@property(retain) RLMArray<WFRealmAccessResourcePermissionState> *accessResourcePermissionStates; // @synthesize accessResourcePermissionStates=_accessResourcePermissionStates;
@property(retain) RLMArray<WFTrustedJavaScriptDomain> *trustedDomains; // @synthesize trustedDomains=_trustedDomains;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

