//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFTodoistProjectPickerParameter : WFEnumerationParameter
{
    _Bool _hasLoadedProjects;
    NSArray *_possibleStates;
    WFAccountAccessResource *_accessResource;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasLoadedProjects; // @synthesize hasLoadedProjects=_hasLoadedProjects;
@property(nonatomic) __weak WFAccountAccessResource *accessResource; // @synthesize accessResource=_accessResource;
- (id)possibleStates;
- (void)dealloc;
- (id)projectNamed:(id)arg1;
- (void)setProjects:(id)arg1;
- (id)projects;
- (id)accessoryColorForPossibleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)loadProjectsFromCache;
- (void)fetchProjectsIfNeeded;
- (void)wasAddedToWorkflow;

@end

