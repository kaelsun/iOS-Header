//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHCompositeMediaResult.h>

@class NSMutableDictionary, NSNumber, NSURL, PHAdjustmentData, PHImageResult;

@interface PHContentEditingInputResult : PHCompositeMediaResult
{
    PHAdjustmentData *_adjustmentData;
    PHImageResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    NSMutableDictionary *_flipImageURLs;
    NSMutableDictionary *_flipVideoURLs;
    _Bool _canHandleAdjustmentData;
    NSNumber *_baseVersionNeeded;
    NSURL *_overCapturePhotoURL;
    NSURL *_overCaptureVideoURL;
    NSURL *_frontSwappingImageRenderURL;
    NSURL *_backSwappingImageRenderURL;
    NSURL *_frontSwappingVideoRenderURL;
    NSURL *_backSwappingVideoRenderURL;
    PHAdjustmentData *_originalAdjustmentData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHAdjustmentData *originalAdjustmentData; // @synthesize originalAdjustmentData=_originalAdjustmentData;
@property(copy, nonatomic) NSURL *backSwappingVideoRenderURL; // @synthesize backSwappingVideoRenderURL=_backSwappingVideoRenderURL;
@property(copy, nonatomic) NSURL *frontSwappingVideoRenderURL; // @synthesize frontSwappingVideoRenderURL=_frontSwappingVideoRenderURL;
@property(copy, nonatomic) NSURL *backSwappingImageRenderURL; // @synthesize backSwappingImageRenderURL=_backSwappingImageRenderURL;
@property(copy, nonatomic) NSURL *frontSwappingImageRenderURL; // @synthesize frontSwappingImageRenderURL=_frontSwappingImageRenderURL;
@property(retain, nonatomic) NSURL *overCaptureVideoURL; // @synthesize overCaptureVideoURL=_overCaptureVideoURL;
@property(retain, nonatomic) NSURL *overCapturePhotoURL; // @synthesize overCapturePhotoURL=_overCapturePhotoURL;
@property(retain, nonatomic) NSNumber *baseVersionNeeded; // @synthesize baseVersionNeeded=_baseVersionNeeded;
@property(nonatomic) _Bool canHandleAdjustmentData; // @synthesize canHandleAdjustmentData=_canHandleAdjustmentData;
- (id)description;
- (void)addFlipVideoURL:(id)arg1 forAssetResourceType:(long long)arg2;
- (void)addFlipImageURL:(id)arg1 forAssetResourceType:(long long)arg2;
- (id)flipVideoURLs;
- (id)flipImageURLs;
- (void)addVideoResult:(id)arg1;
- (void)addImageResult:(id)arg1;
- (void)clearAdjustmentData;
- (void)addAdjustmentDataResult:(id)arg1;
- (void)mergeInfoDictionaryFromResult:(id)arg1;
- (id)videoSandboxExtensionToken;
- (id)imageSandboxExtensionToken;
- (_Bool)isCancelled;
- (void)setCancelled:(_Bool)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (_Bool)isInCloud;
- (void)setIsInCloud:(_Bool)arg1;
- (id)imagePropertiesLoadIfNeeded:(_Bool)arg1;
- (id)videoAdjustmentData;
- (id)videoURL;
- (id)exifOrientation;
- (id)imageUTI;
- (id)imageData;
- (id)imageURL;
- (struct CGImage *)imageRef;
- (id)adjustmentData;
- (_Bool)containsValidData;

@end

