//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAPortalLayer;

@interface SSSPortalView : UIView
{
    UIView *_sourceView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) unsigned long long sourceLayerRenderId;
@property(nonatomic) unsigned int sourceContextId;
@property(nonatomic) _Bool allowsBackdropGroups;
@property(nonatomic) _Bool matchesPosition;
@property(nonatomic) _Bool matchesTransform;
@property(nonatomic) _Bool matchesAlpha;
@property(nonatomic) _Bool hidesSourceView;
@property(readonly, nonatomic) CAPortalLayer *portalLayer;

@end

