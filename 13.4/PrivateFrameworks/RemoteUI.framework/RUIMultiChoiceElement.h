//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/RUIMultiChoiceActionHandler-Protocol.h>

@class NSString, RUIMultiChoiceView, RUIObjectModel;

@interface RUIMultiChoiceElement : RUIElement <RUIMultiChoiceActionHandler>
{
    RUIMultiChoiceView *_view;
    RUIObjectModel *_objectModel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(retain, nonatomic) RUIMultiChoiceView *view; // @synthesize view=_view;
- (void)didTapChoice:(id)arg1;
- (double)estimatedViewHeight;
- (void)addChoice:(id)arg1;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

