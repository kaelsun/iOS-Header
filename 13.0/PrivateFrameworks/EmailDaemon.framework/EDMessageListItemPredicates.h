//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EDMessageListItemPredicates : NSObject
{
}

+ (id)predicateForSpotlightPredicate:(id)arg1;
+ (id)predicateForBody:(id)arg1;
+ (id)predicateForSubjectPredicate:(id)arg1;
+ (id)predicateForSenderPredicate:(id)arg1;
+ (id)predicateForAnyRecipientPredicate:(id)arg1;
+ (id)predicateForMessageIDHeaderHashPredicate:(id)arg1;
+ (id)predicateForAnyMailboxWithPredicate:(id)arg1;
+ (id)_objectIDsFromRightExpression:(id)arg1;
+ (id)predicateForMessagesWithObjectIDsPredicate:(id)arg1 messagePersistence:(id)arg2;
+ (id)predicateForMailboxTypePredicate:(id)arg1 mailboxPersistence:(id)arg2;
+ (id)_addressesFromAccountsProvider:(id)arg1;
+ (id)_predicateForRecipientMessagesAddressesKey:(id)arg1 accountsProvider:(id)arg2;
+ (id)predicateForCCMeMessagesWithAccountsProvider:(id)arg1;
+ (id)predicateForToMeMessagesWithAccountsProvider:(id)arg1;
+ (id)predicateForIncludesMeMessagesWithAccountsProvider:(id)arg1;
+ (id)predicateForVIPMessagesWithVIPManager:(id)arg1;

@end

