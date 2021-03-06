//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "XMPPRoomOccupant.h"

@class NSDate, NSString, XMPPJID, XMPPPresence;

@interface XMPPRoomOccupantCoreDataStorageObject : NSManagedObject <XMPPRoomOccupant>
{
}

@property(retain, nonatomic) NSString *realJIDStr; // @dynamic realJIDStr;
@property(retain, nonatomic) XMPPJID *realJID; // @dynamic realJID;
@property(retain, nonatomic) NSString *jidStr; // @dynamic jidStr;
@property(retain, nonatomic) XMPPJID *jid; // @dynamic jid;
@property(retain, nonatomic) NSString *roomJIDStr; // @dynamic roomJIDStr;
@property(retain, nonatomic) XMPPJID *roomJID; // @dynamic roomJID;
@property(retain, nonatomic) NSString *presenceStr; // @dynamic presenceStr;
@property(retain, nonatomic) XMPPPresence *presence; // @dynamic presence;

// Remaining properties
@property(retain, nonatomic) NSString *affiliation; // @dynamic affiliation;
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) XMPPJID *primitiveJid; // @dynamic primitiveJid;
@property(retain, nonatomic) NSString *primitiveJidStr; // @dynamic primitiveJidStr;
@property(retain, nonatomic) XMPPPresence *primitivePresence; // @dynamic primitivePresence;
@property(retain, nonatomic) NSString *primitivePresenceStr; // @dynamic primitivePresenceStr;
@property(retain, nonatomic) XMPPJID *primitiveRealJID; // @dynamic primitiveRealJID;
@property(retain, nonatomic) NSString *primitiveRealJIDStr; // @dynamic primitiveRealJIDStr;
@property(retain, nonatomic) XMPPJID *primitiveRoomJID; // @dynamic primitiveRoomJID;
@property(retain, nonatomic) NSString *primitiveRoomJIDStr; // @dynamic primitiveRoomJIDStr;
@property(retain, nonatomic) NSString *role; // @dynamic role;
@property(retain, nonatomic) NSString *streamBareJidStr; // @dynamic streamBareJidStr;
@property(readonly) Class superclass;

@end

