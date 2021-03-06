//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class IKAppDocument, NSDictionary, SKUIDocumentStackItem, SKUIModalDocumentController;

@protocol SKUIModalDocumentDelegate <NSObject>

@optional
- (_Bool)modalDocumentController:(SKUIModalDocumentController *)arg1 willPushDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)modalDocumentControllerDidFinish:(SKUIModalDocumentController *)arg1;
- (long long)modalDocumentController:(SKUIModalDocumentController *)arg1 barStyleForStackItem:(SKUIDocumentStackItem *)arg2;
@end

