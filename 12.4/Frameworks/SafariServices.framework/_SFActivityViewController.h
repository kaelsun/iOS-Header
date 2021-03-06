//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class LPMetadataProvider, NSString, NSURL, _SFPrintController, _SFSafariSharingExtensionController;
@protocol _SFActivityViewControllerDelegate;

@interface _SFActivityViewController : UIActivityViewController
{
    LPMetadataProvider *_pendingMessageMetadataProvider;
    _SFPrintController *_printController;
    _SFSafariSharingExtensionController *_sharingExtensionController;
    id <_SFActivityViewControllerDelegate> _delegate;
    NSURL *_sharingURL;
    NSString *_currentExtensionIdentifier;
}

+ (id)activeWebPageExtensionItemForURL:(id)arg1 withPreviewImageHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *currentExtensionIdentifier; // @synthesize currentExtensionIdentifier=_currentExtensionIdentifier;
@property(retain, nonatomic) NSURL *sharingURL; // @synthesize sharingURL=_sharingURL;
@property(nonatomic) __weak id <_SFActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak _SFSafariSharingExtensionController *sharingExtensionController; // @synthesize sharingExtensionController=_sharingExtensionController;
- (void).cxx_destruct;
- (void)prepareMessageActivity:(id)arg1 withWebView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processJavaScriptFinalizeReturnedItems:(id)arg1 forExtension:(id)arg2;
- (id)_extensionItemForExtensionActivity:(id)arg1;
- (id)_javaScriptProcessingFileURLInExtension:(id)arg1;
- (void)prepareJavaScriptExtensionItemForActivity:(id)arg1;
- (void)_preparePrint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeActivity;
- (void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(_Bool)arg3;
- (void)_updatePrintControllerWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4;

@end

