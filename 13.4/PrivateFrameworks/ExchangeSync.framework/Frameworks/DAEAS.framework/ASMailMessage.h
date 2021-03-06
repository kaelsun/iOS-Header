//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage
{
    ASEmailItem *_ASEmailItem;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rfc822Data;
- (int)smimeType;
- (_Bool)isDraft;
- (id)bcc;
- (_Bool)verbIsSet;
- (_Bool)flaggedIsSet;
- (_Bool)readIsSet;
- (int)lastVerb;
- (id)preview;
- (id)folderID;
- (id)longID;
- (id)remoteID;
- (id)conversationIndex;
- (id)conversationId;
- (id)threadTopic;
- (_Bool)meetingRequestIsActionable;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (id)attachments;
- (id)messageClass;
- (int)bodyTruncated;
- (int)bodySize;
- (id)sender;
- (id)body;
- (_Bool)flagged;
- (_Bool)read;
- (int)importance;
- (id)displayTo;
- (id)subject;
- (id)date;
- (id)replyTo;
- (id)from;
- (id)cc;
- (id)to;
- (id)description;
- (id)initWithASEmailItem:(id)arg1;

@end

