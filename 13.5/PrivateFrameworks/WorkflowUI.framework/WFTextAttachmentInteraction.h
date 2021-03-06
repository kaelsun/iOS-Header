//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UIGestureRecognizerDelegate-Protocol.h>
#import <WorkflowUI/UIInteraction-Protocol.h>

@class NSString, NSTextContainer, UITapGestureRecognizer, UIView;
@protocol WFTextAttachmentInteractionDelegate;

@interface WFTextAttachmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>
{
    UIView *_view;
    id <WFTextAttachmentInteractionDelegate> _delegate;
    NSTextContainer *_textContainer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct UIEdgeInsets _textContainerInset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) struct UIEdgeInsets textContainerInset; // @synthesize textContainerInset=_textContainerInset;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(nonatomic) __weak id <WFTextAttachmentInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTextTap:(id)arg1;
- (id)attachmentAtPoint:(struct CGPoint)arg1 characterRange:(out struct _NSRange *)arg2;
- (id)textStorage;
- (id)layoutManager;
- (void)dealloc;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

