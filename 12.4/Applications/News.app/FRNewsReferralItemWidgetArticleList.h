//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRNewsReferralItem-Protocol.h"

@class FRNewsReferralItemWidgetArticleListEncodableElement, NSArray, NSDictionary;
@protocol NSSecureCoding;

@interface FRNewsReferralItemWidgetArticleList : NSObject <FRNewsReferralItem>
{
    NSDictionary *_flintDocumentURLAssetHandlesByRemoteURL;
    FRNewsReferralItemWidgetArticleListEncodableElement *_myEncodableElement;
}

+ (Class)encodableElementClass;
+ (id)newsReferralItemWidgetArticleList:(id)arg1;
@property(readonly, copy, nonatomic) FRNewsReferralItemWidgetArticleListEncodableElement *myEncodableElement; // @synthesize myEncodableElement=_myEncodableElement;
@property(readonly, copy, nonatomic) NSDictionary *flintDocumentURLAssetHandlesByRemoteURL; // @synthesize flintDocumentURLAssetHandlesByRemoteURL=_flintDocumentURLAssetHandlesByRemoteURL;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *assetHandles;
@property(readonly, copy, nonatomic) id <NSSecureCoding> encodableElement;
- (id)initWithEncodableElement:(id)arg1 assetHandlesByRemoteURL:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)referredArticlesWithAssetManager:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *JSONArray;
- (id)initWithJSONArray:(id)arg1 flintDocumentURLAssetHandlesByRemoteURL:(id)arg2;
- (id)init;
- (id)ts_newsReferralItemWidgetArticleList;

@end

