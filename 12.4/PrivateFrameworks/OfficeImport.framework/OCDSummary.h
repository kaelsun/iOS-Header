//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCDSummary : NSObject
{
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
}

- (void)setHyperlinkBase:(id)arg1;
- (id)hyperlinkBase;
- (void)setComments:(id)arg1;
- (id)comments;
- (void)setKeywords:(id)arg1;
- (id)keywords;
- (void)setAuthor:(id)arg1;
- (id)author;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;

@end

