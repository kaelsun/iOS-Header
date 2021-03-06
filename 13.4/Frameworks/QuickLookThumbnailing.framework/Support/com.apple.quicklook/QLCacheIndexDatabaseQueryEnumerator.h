//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLCacheIndexDatabaseGenericEnumerator.h"

@class NSArray, NSDate, NSDictionary, QLCacheBlobInfo, QLCacheFileIdentifier;

@interface QLCacheIndexDatabaseQueryEnumerator : QLCacheIndexDatabaseGenericEnumerator
{
    NSDictionary *_fileRequests;
    NSArray *_allFileRequests;
    unsigned char _iconMode;
    float _size;
    unsigned int _hitCount;
    unsigned int _width;
    unsigned int _height;
    unsigned int _bitsPerComponent;
    unsigned int _bitsPerPixel;
    unsigned int _bytesPerRow;
    unsigned int _bitmapInfo;
    int _interpolationQuality;
    int _flavor;
    unsigned long long _cacheId;
    QLCacheFileIdentifier *_fileIdentifier;
    long long _iconVariant;
    unsigned long long _badgeType;
    NSDate *_lastHitDate;
    QLCacheBlobInfo *_bitmapDataBlobInfo;
    QLCacheBlobInfo *_plistBufferBlobInfo;
    struct CGRect _contentRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) int flavor; // @synthesize flavor=_flavor;
@property(readonly, nonatomic) int interpolationQuality; // @synthesize interpolationQuality=_interpolationQuality;
@property(readonly, nonatomic) QLCacheBlobInfo *metadataBlobInfo; // @synthesize metadataBlobInfo=_plistBufferBlobInfo;
@property(readonly, nonatomic) QLCacheBlobInfo *bitmapDataBlobInfo; // @synthesize bitmapDataBlobInfo=_bitmapDataBlobInfo;
@property(readonly, nonatomic) unsigned int bitmapInfo; // @synthesize bitmapInfo=_bitmapInfo;
@property(readonly, nonatomic) unsigned int bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) unsigned int bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property(readonly, nonatomic) unsigned int bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) NSDate *lastHitDate; // @synthesize lastHitDate=_lastHitDate;
@property(readonly, nonatomic) unsigned int hitCount; // @synthesize hitCount=_hitCount;
@property(readonly, nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(readonly, nonatomic) long long iconVariant; // @synthesize iconVariant=_iconVariant;
@property(readonly, nonatomic) unsigned char iconMode; // @synthesize iconMode=_iconMode;
@property(readonly, nonatomic) float size; // @synthesize size=_size;
@property(readonly, nonatomic) QLCacheFileIdentifier *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(readonly, nonatomic) unsigned long long cacheId; // @synthesize cacheId=_cacheId;
- (_Bool)nextThumbnailInfo;
- (void)_getCacheIds;
- (void)_getCacheIdsForHomogeneousArrayOfRequests:(id)arg1;
- (void)dealloc;
- (id)initWithSqliteDatabase:(id)arg1 fileRequests:(id)arg2;

@end

