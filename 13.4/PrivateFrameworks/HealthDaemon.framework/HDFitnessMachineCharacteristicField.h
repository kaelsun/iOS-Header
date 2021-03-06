//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDFitnessMachineCharacteristicField : NSObject
{
    _Bool _flagFieldFlipped;
    unsigned char _correspondingFlagBit;
    unsigned char _fieldLength;
    unsigned char _factor;
    _Bool _isSet;
}

@property(nonatomic) _Bool isSet; // @synthesize isSet=_isSet;
@property(readonly, nonatomic) unsigned char factor; // @synthesize factor=_factor;
@property(readonly, nonatomic) unsigned char fieldLength; // @synthesize fieldLength=_fieldLength;
@property(readonly, nonatomic) unsigned char correspondingFlagBit; // @synthesize correspondingFlagBit=_correspondingFlagBit;
@property(nonatomic) _Bool flagFieldFlipped; // @synthesize flagFieldFlipped=_flagFieldFlipped;
- (void)markFieldSet;
- (id)valueAsData;
- (id)valueFromDouble:(double)arg1;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (_Bool)isIncludedInFlags:(unsigned int)arg1;
- (id)initWithCorrespondingFlagBit:(unsigned char)arg1 fieldLength:(unsigned char)arg2 factor:(unsigned char)arg3;

@end

