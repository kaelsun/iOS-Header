//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRecipient.h>

@class NSString, PHPerson;

@interface PXCMMMomentsParticipant : PXRecipient
{
    NSString *_additionalLocalizedName;
    PHPerson *_person;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
- (id)localizedName;
- (id)initWithPerson:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 phoneNumber:(id)arg2 localizedName:(id)arg3;

@end

