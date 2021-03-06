//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBag, AMSMediaTask, LSApplicationProxy, NSDictionary, NSError, NSMutableArray, NSString, NSURL, SFLaunchRequest;
@protocol OS_dispatch_queue;

@interface SFAppContent : NSObject
{
    AMSBag *_amsBag;
    struct CGImage **_appIcon;
    LSApplicationProxy *_appProxy;
    NSString *_appName;
    NSDictionary *_amsArtworkDict;
    NSString *_amsLaunchURL;
    NSError *_amsResultsError;
    int _amsResultsState;
    AMSMediaTask *_amsTask;
    NSMutableArray *_infoFetchRequests;
    SFLaunchRequest *_launchRequest;
    NSString *_adamID;
    NSURL *_amsURLOverride;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSURL *amsURLOverride; // @synthesize amsURLOverride=_amsURLOverride;
@property(retain, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
- (id)_launchOptions;
- (void)_launchWithCompletion:(CDUnknownBlockType)arg1;
- (void)launchWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchNameAndIconWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNameAndIconWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_amsLaunchURLFromResult:(id)arg1;
- (id)_amsFirstResponseDataItemFromResult:(id)arg1;
- (id)_amsArtworkDictionaryFromResult:(id)arg1;
- (id)_amsAppNameFromResult:(id)arg1;
- (void)_amsLaunchIfNeeded;
- (void)_amsFetchArtworkWithRequest:(id)arg1;
- (void)_amsFetchArtworkIfNeeded;
- (void)_amsFetchAppResultsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_amsFetchResults;
- (void)_amsRun;
@property(readonly, nonatomic) _Bool installed;
- (id)initWithAdamID:(id)arg1;

@end

