//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DACalDAV/NSObject-Protocol.h>

@class DAAccount;
@protocol DACalDAViCalItemBackingModel;

@protocol DADataElement <NSObject>
- (_Bool)deleteFromContainer:(void *)arg1;
- (_Bool)saveServerIDToExistingItem;
- (_Bool)loadLocalItemWithAccount:(DAAccount *)arg1;
- (void)setRem_LocalItem:(id <DACalDAViCalItemBackingModel>)arg1;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(DAAccount *)arg5;
@end

