//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMSPromise, NSMutableURLRequest, NSURLRequest;

@protocol AMSRequestEncoding <NSObject>

@optional
- (NSMutableURLRequest *)requestByEncodingRequest:(NSURLRequest *)arg1 parameters:(id)arg2 error:(id *)arg3;
- (AMSPromise *)requestByEncodingRequest:(NSURLRequest *)arg1 parameters:(id)arg2;
@end

