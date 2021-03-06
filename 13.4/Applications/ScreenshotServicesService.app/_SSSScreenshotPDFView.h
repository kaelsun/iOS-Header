//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_SSSScreenshotAnnotationView.h"

#import "SSSScreenshotContainerView-Protocol.h"

@class PDFView, SSSScreenshot, UIActivityIndicatorView, UIView, _SSSScreenshotContentOverlayController;

@interface _SSSScreenshotPDFView : _SSSScreenshotAnnotationView <SSSScreenshotContainerView>
{
    PDFView *_pdfView;
    UIActivityIndicatorView *_activityIndicatorView;
    long long _currentVellumPage;
    struct CGPoint _scrollOffset;
    double _scrollZoomScale;
}

- (void).cxx_destruct;
- (void)updateViewState;
@property(readonly, nonatomic) long long currentPDFPage;
@property(readonly, nonatomic) PDFView *_pdfView;
@property(readonly, nonatomic) UIView *viewWithScreenshotImage;
- (void)enterMarkupMode;
- (void)enterCropMode;
- (void)setupOverlayControllerWithPDFDocument:(id)arg1;
- (void)setupPDFData;
- (id)undoManager;
@property(nonatomic) __weak SSSScreenshot *screenshot;
- (void)setCrop:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) _SSSScreenshotContentOverlayController *overlayController;
@property(nonatomic) _Bool screenshotEditsSnapshotted;
@property(nonatomic) double vellumOpacity;

@end

