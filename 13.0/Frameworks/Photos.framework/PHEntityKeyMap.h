//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHEntityKeyMap : NSObject
{
    struct NSDictionary *_propertyKeysByEntityKey;
    struct NSDictionary *_entityKeysByPropertyKey;
}

+ (void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(struct NSDictionary *)arg3;
+ (struct NSDictionary *)transposePropertyKeysByEntityKey:(struct NSDictionary *)arg1;
- (void).cxx_destruct;
- (id)propertyKeyForEntityKey:(id)arg1;
- (id)entityKeyForPropertyKey:(id)arg1;
- (id)initWithPropertyKeysByEntityKey:(struct NSDictionary *)arg1;

@end

