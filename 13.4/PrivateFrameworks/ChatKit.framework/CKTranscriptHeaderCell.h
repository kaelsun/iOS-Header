//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTranscriptCell.h>

@class UIView;

@interface CKTranscriptHeaderCell : CKTranscriptCell
{
    UIView *_loadingIndicator;
}

+ (double)defaultCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void)startAnimatingActivityIndicator;
- (void)layoutSubviewsForAlignmentContents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

