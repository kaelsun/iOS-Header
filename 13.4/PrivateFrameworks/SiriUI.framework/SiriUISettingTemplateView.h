//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateView.h>

@class UILabel;
@protocol SiriUISettingTemplateModel;

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView
{
    UILabel *_textLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadData;
- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SiriUISettingTemplateModel> dataSource; // @dynamic dataSource;

@end

