//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XMPPSASLAuthentication.h"

@class NSString, XMPPStream;

@interface XMPPDigestMD5Authentication : NSObject <XMPPSASLAuthentication>
{
    XMPPStream *xmppStream;
    _Bool awaitingChallenge;
    NSString *realm;
    NSString *nonce;
    NSString *qop;
    NSString *cnonce;
    NSString *digestURI;
    NSString *username;
    NSString *password;
}

+ (id)mechanismName;
@property(retain, nonatomic) NSString *password; // @synthesize password;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSString *digestURI; // @synthesize digestURI;
@property(retain, nonatomic) NSString *cnonce; // @synthesize cnonce;
@property(retain, nonatomic) NSString *qop; // @synthesize qop;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce;
@property(retain, nonatomic) NSString *realm; // @synthesize realm;
- (void).cxx_destruct;
- (id)base64EncodedFullResponse;
- (id)response;
- (id)dictionaryFromChallenge:(id)arg1;
- (long long)handleAuth:(id)arg1;
- (long long)handleAuth2:(id)arg1;
- (long long)handleAuth1:(id)arg1;
- (_Bool)start:(id *)arg1;
- (id)initWithStream:(id)arg1 password:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

