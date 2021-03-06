//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/JXURLConnectionOperation.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSObject, NSString, NSURL, NSURLAuthenticationChallenge, NSURLCredential;
@protocol JXHTTPOperationDelegate, JXHTTPRequestBody, OS_dispatch_queue;

@interface JXHTTPOperation : JXURLConnectionOperation
{
    _Bool _useCredentialStorage;
    _Bool _trustAllHosts;
    _Bool _updatesNetworkActivityIndicator;
    _Bool _performsBlocksOnMainQueue;
    NSObject<JXHTTPOperationDelegate> *_delegate;
    NSObject<JXHTTPRequestBody> *_requestBody;
    NSString *_uniqueString;
    NSString *_responseDataFilePath;
    id _userObject;
    NSURLAuthenticationChallenge *_authenticationChallenge;
    NSURLCredential *_credential;
    NSArray *_trustedHosts;
    NSString *_username;
    NSString *_password;
    NSNumber *_downloadProgress;
    NSNumber *_uploadProgress;
    NSDate *_startDate;
    NSDate *_finishDate;
    CDUnknownBlockType _willStartBlock;
    CDUnknownBlockType _willNeedNewBodyStreamBlock;
    CDUnknownBlockType _willSendRequestForAuthenticationChallengeBlock;
    CDUnknownBlockType _didStartBlock;
    CDUnknownBlockType _didReceiveResponseBlock;
    CDUnknownBlockType _didReceiveDataBlock;
    CDUnknownBlockType _didSendDataBlock;
    CDUnknownBlockType _didFinishLoadingBlock;
    CDUnknownBlockType _didFailBlock;
    CDUnknownBlockType _willCacheResponseBlock;
    CDUnknownBlockType _willSendRequestRedirectBlock;
    NSObject<OS_dispatch_queue> *_blockQueue;
}

+ (id)withURLString:(id)arg1 queryParameters:(id)arg2;
+ (id)withURLString:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *blockQueue; // @synthesize blockQueue=_blockQueue;
@property(copy) CDUnknownBlockType willSendRequestRedirectBlock; // @synthesize willSendRequestRedirectBlock=_willSendRequestRedirectBlock;
@property(copy) CDUnknownBlockType willCacheResponseBlock; // @synthesize willCacheResponseBlock=_willCacheResponseBlock;
@property(copy) CDUnknownBlockType didFailBlock; // @synthesize didFailBlock=_didFailBlock;
@property(copy) CDUnknownBlockType didFinishLoadingBlock; // @synthesize didFinishLoadingBlock=_didFinishLoadingBlock;
@property(copy) CDUnknownBlockType didSendDataBlock; // @synthesize didSendDataBlock=_didSendDataBlock;
@property(copy) CDUnknownBlockType didReceiveDataBlock; // @synthesize didReceiveDataBlock=_didReceiveDataBlock;
@property(copy) CDUnknownBlockType didReceiveResponseBlock; // @synthesize didReceiveResponseBlock=_didReceiveResponseBlock;
@property(copy) CDUnknownBlockType didStartBlock; // @synthesize didStartBlock=_didStartBlock;
@property(copy) CDUnknownBlockType willSendRequestForAuthenticationChallengeBlock; // @synthesize willSendRequestForAuthenticationChallengeBlock=_willSendRequestForAuthenticationChallengeBlock;
@property(copy) CDUnknownBlockType willNeedNewBodyStreamBlock; // @synthesize willNeedNewBodyStreamBlock=_willNeedNewBodyStreamBlock;
@property(copy) CDUnknownBlockType willStartBlock; // @synthesize willStartBlock=_willStartBlock;
@property _Bool performsBlocksOnMainQueue; // @synthesize performsBlocksOnMainQueue=_performsBlocksOnMainQueue;
@property(retain) NSDate *finishDate; // @synthesize finishDate=_finishDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property _Bool updatesNetworkActivityIndicator; // @synthesize updatesNetworkActivityIndicator=_updatesNetworkActivityIndicator;
@property(retain) NSNumber *uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain) NSNumber *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSArray *trustedHosts; // @synthesize trustedHosts=_trustedHosts;
@property _Bool trustAllHosts; // @synthesize trustAllHosts=_trustAllHosts;
@property _Bool useCredentialStorage; // @synthesize useCredentialStorage=_useCredentialStorage;
@property(retain) NSURLCredential *credential; // @synthesize credential=_credential;
@property(retain) NSURLAuthenticationChallenge *authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(retain) id userObject; // @synthesize userObject=_userObject;
@property(copy, nonatomic) NSString *responseDataFilePath; // @synthesize responseDataFilePath=_responseDataFilePath;
@property(retain) NSString *uniqueString; // @synthesize uniqueString=_uniqueString;
@property(retain) NSObject<JXHTTPRequestBody> *requestBody; // @synthesize requestBody=_requestBody;
@property __weak NSObject<JXHTTPOperationDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)willFinish;
- (void)main;
@property(readonly) double elapsedSeconds;
- (CDUnknownBlockType)blockForSelector:(SEL)arg1;
- (void)finalizeRequestBody;
- (void)performDelegateMethod:(SEL)arg1;
- (id)init;
- (void)dealloc;
- (id)responseURL;
- (id)responseTextEncodingName;
- (id)responseMIMEType;
- (id)responseExpectedFileName;
- (long long)responseExpectedContentLength;
- (id)responseStatusString;
- (long long)responseStatusCode;
- (id)responseHeaders;
- (id)responseJSON;
- (id)responseString;
- (id)responseData;
- (void)setValue:(id)arg1 forRequestHeader:(id)arg2;
- (void)addValue:(id)arg1 forRequestHeader:(id)arg2;
@property(nonatomic) _Bool requestShouldHandleCookies;
@property(retain, nonatomic) NSString *requestMethod;
@property(retain, nonatomic) NSDictionary *requestHeaders;
@property(retain, nonatomic) NSURL *requestURL;
@property(nonatomic) unsigned long long requestNetworkServiceType;
@property(nonatomic) double requestTimeoutInterval;
@property(retain, nonatomic) NSURL *requestMainDocumentURL;
@property(nonatomic) _Bool requestShouldUsePipelining;
@property(nonatomic) unsigned long long requestCachePolicy;

@end

