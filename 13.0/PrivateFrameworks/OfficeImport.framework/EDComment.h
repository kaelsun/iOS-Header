//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDString;

__attribute__((visibility("hidden")))
@interface EDComment : NSObject
{
    _Bool _visible;
    int _rowIndex;
    int _columnIndex;
    EDString *_author;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) EDString *author; // @synthesize author=_author;
@property(nonatomic) int columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) int rowIndex; // @synthesize rowIndex=_rowIndex;
- (void).cxx_destruct;
- (id)description;

@end

