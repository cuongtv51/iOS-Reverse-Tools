//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, XMPPJID, XMPPMessage;

@protocol XMPPRoomMessage <NSObject>
- (_Bool)isFromMe;
- (NSDate *)remoteTimestamp;
- (NSDate *)localTimestamp;
- (NSString *)body;
- (NSString *)nickname;
- (XMPPJID *)jid;
- (XMPPJID *)roomJID;
- (XMPPMessage *)message;
@end

