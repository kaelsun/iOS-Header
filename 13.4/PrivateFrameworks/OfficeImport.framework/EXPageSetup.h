//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXPageSetup : NSObject
{
}

+ (id)edPageMarginsFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edPageSetupFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)pageOrientationEnumMap;
+ (id)pageOrderEnumMap;
+ (int)edPageOrderFromPageOrderString:(id)arg1;
+ (int)edPageOrientationFromPageOrientationString:(id)arg1;

@end

