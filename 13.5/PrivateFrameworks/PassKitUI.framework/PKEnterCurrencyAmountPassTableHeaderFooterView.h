//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class PKEnterCurrencyAmountPassView;
@protocol PKEnterCurrencyAmountPassViewDelegate;

@interface PKEnterCurrencyAmountPassTableHeaderFooterView : UITableViewHeaderFooterView
{
    id <PKEnterCurrencyAmountPassViewDelegate> _delegate;
    PKEnterCurrencyAmountPassView *_amountPassView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKEnterCurrencyAmountPassView *amountPassView; // @synthesize amountPassView=_amountPassView;
@property(nonatomic) __weak id <PKEnterCurrencyAmountPassViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_bottomPadding;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2;
- (id)initWithCurrenyAmount:(id)arg1;

@end

