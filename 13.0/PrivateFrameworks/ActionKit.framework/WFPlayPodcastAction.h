//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFPlayPodcastAction : WFAction
{
}

- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;
- (id)localizedKeyParameterDisplayName;
- (id)errorPlayingPodcast:(unsigned int)arg1;
- (id)genericPlayPodcastFailedError;
- (id)contentNotFoundError;
- (id)getPlaybackURLForContentItem:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

