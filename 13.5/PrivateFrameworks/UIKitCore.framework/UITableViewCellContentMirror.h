//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UITableViewCellContentMirror : UIView
{
    unsigned int _selected:1;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)cell;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isSelected) _Bool selected;

@end

