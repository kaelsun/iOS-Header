//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSCH3DShaderVariable;

@interface TSCH3DShaderLinkedVariable : NSObject
{
    NSString *name;
    TSCH3DShaderVariable *variable;
    struct TSCH3DShaderVariableScopeType scope;
}

+ (id)linkedVariable;
- (id).cxx_construct;
@property(nonatomic) struct TSCH3DShaderVariableScopeType scope; // @synthesize scope;
@property(retain, nonatomic) TSCH3DShaderVariable *variable; // @synthesize variable;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id)inputVariableName;
- (_Bool)isAttribute;
- (id)description;
- (void)dealloc;

@end

