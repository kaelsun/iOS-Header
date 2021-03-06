//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKFormat.h>

#import <TSKit/NSCopying-Protocol.h>

@protocol TSUMultipleChoiceListChoiceProviding;

@interface TSKMultipleChoiceListFormat_DEPRECATED : TSKFormat <NSCopying>
{
    int _initialValue;
    unsigned int _multipleChoiceListFormatID;
    id <TSUMultipleChoiceListChoiceProviding> _popupModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TSUMultipleChoiceListChoiceProviding> popupModel; // @synthesize popupModel=_popupModel;
@property(readonly, nonatomic) unsigned int multipleChoiceListFormatID; // @synthesize multipleChoiceListFormatID=_multipleChoiceListFormatID;
@property(readonly, nonatomic) int initialValue; // @synthesize initialValue=_initialValue;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (id)asMultipleChoiceListFormat;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithInitialValue:(int)arg1 multipleChoiceListFormatID:(unsigned int)arg2 popupModel:(id)arg3;

@end

