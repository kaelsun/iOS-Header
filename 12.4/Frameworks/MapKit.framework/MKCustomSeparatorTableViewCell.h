//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@interface MKCustomSeparatorTableViewCell : MKTableViewCell
{
    double _leftSeparatorInset;
    double _rightSeparatorInset;
}

@property(nonatomic) double rightSeparatorInset; // @synthesize rightSeparatorInset=_rightSeparatorInset;
@property(nonatomic) double leftSeparatorInset; // @synthesize leftSeparatorInset=_leftSeparatorInset;
@property(nonatomic) double trailingSeparatorInset;
@property(nonatomic) double leadingSeparatorInset;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
- (void)_updateSeparatorInset;
- (struct CGRect)_separatorFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

