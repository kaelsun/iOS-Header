//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCColor, FCColorGradient, NSArray, NSString, NTPBDiscoverMoreVideosInfo;

@interface FCVideoArticlesOperationResult : NSObject
{
    NSArray *_headlines;
    NSString *_channelID;
    NSString *_titleText;
    FCColor *_titleColor;
    FCColor *_darkStyleTitleColor;
    NSString *_subtitleText;
    FCColorGradient *_backgroundColorGradient;
    FCColorGradient *_darkStyleBackgroundColorGradient;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NSString *_mutingChannelID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *mutingChannelID; // @synthesize mutingChannelID=_mutingChannelID;
@property(readonly, copy, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo; // @synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo;
@property(readonly, copy, nonatomic) FCColorGradient *darkStyleBackgroundColorGradient; // @synthesize darkStyleBackgroundColorGradient=_darkStyleBackgroundColorGradient;
@property(readonly, copy, nonatomic) FCColorGradient *backgroundColorGradient; // @synthesize backgroundColorGradient=_backgroundColorGradient;
@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, copy, nonatomic) FCColor *darkStyleTitleColor; // @synthesize darkStyleTitleColor=_darkStyleTitleColor;
@property(readonly, copy, nonatomic) FCColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
- (id)initWithVideoGroupConfig:(id)arg1 headlines:(id)arg2;

@end

