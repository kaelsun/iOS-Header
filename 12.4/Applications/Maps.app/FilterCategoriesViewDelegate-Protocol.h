//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FilterCategoriesView, NSString;

@protocol FilterCategoriesViewDelegate <NSObject>
- (NSString *)refineSearchText;
- (int)refineSearchSessionType;
- (void)filterView:(FilterCategoriesView *)arg1 indexSelected:(unsigned long long)arg2;
@end

