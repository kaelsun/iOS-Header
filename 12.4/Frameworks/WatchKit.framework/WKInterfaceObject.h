//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WKInterfaceObject : NSObject
{
    NSString *_interfaceProperty;
    NSString *_viewControllerID;
    NSString *_propertyIndex;
    long long _tableIndex;
    long long _rowIndex;
}

@property(nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(nonatomic) long long tableIndex; // @synthesize tableIndex=_tableIndex;
@property(retain, nonatomic) NSString *propertyIndex; // @synthesize propertyIndex=_propertyIndex;
@property(copy, nonatomic) NSString *viewControllerID; // @synthesize viewControllerID=_viewControllerID;
@property(copy, nonatomic) NSString *interfaceProperty; // @synthesize interfaceProperty=_interfaceProperty;
- (void).cxx_destruct;
- (void)setRotation:(double)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)sizeToFitHeight;
- (void)sizeToFitWidth;
- (void)setRelativeHeight:(double)arg1 withAdjustment:(double)arg2;
- (void)setRelativeWidth:(double)arg1 withAdjustment:(double)arg2;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
- (void)_sendValueChanged:(id)arg1;
- (void)_setImageNamed:(id)arg1 forProperty:(id)arg2;
- (void)_setImageData:(id)arg1 forProperty:(id)arg2;
- (void)_setImage:(id)arg1 forProperty:(id)arg2;
- (void)didRegisterWithRemoteInterface;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5;
- (id)init;
- (void)setAccessibilityImageRegions:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;

@end

