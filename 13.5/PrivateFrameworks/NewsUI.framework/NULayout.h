//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUComponent-Protocol.h>
#import <NewsUI/NULayout-Protocol.h>

@class NSString, NUComponents, NULayoutResolver;
@protocol NUNode, NUSizer;

@interface NULayout : NSObject <NULayout, NUComponent>
{
    id <NUSizer> _sizer;
    id <NUNode> _node;
    NUComponents *_components;
    NULayoutResolver *_resolver;
    struct NULayoutOptions _options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NULayoutResolver *resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) NUComponents *components; // @synthesize components=_components;
@property(readonly, nonatomic) struct NULayoutOptions options; // @synthesize options=_options;
@property(readonly, nonatomic) id <NUNode> node; // @synthesize node=_node;
@property(readonly, nonatomic) id <NUSizer> sizer; // @synthesize sizer=_sizer;
- (void)buildComponents:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct CGPoint originOffset;
- (void)layoutComponentsInBounds:(struct CGRect)arg1 originOffset:(struct CGPoint)arg2 layoutContext:(id)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithNode:(id)arg1 sizer:(id)arg2 options:(struct NULayoutOptions)arg3 componentsBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

