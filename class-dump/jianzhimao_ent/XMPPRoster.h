//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class DDList, NSMutableArray, NSString, XMPPIDTracker;

@interface XMPPRoster : XMPPModule
{
    id <XMPPRosterStorage> xmppRosterStorage;
    XMPPIDTracker *xmppIDTracker;
    unsigned char config;
    unsigned char flags;
    NSMutableArray *earlyPresenceElements;
    DDList *mucModules;
    NSString *_rosterVersion;
}

@property(retain, nonatomic) NSString *rosterVersion; // @synthesize rosterVersion=_rosterVersion;
- (void).cxx_destruct;
- (void)xmppvCardAvatarModule:(id)arg1 didReceivePhoto:(id)arg2 forJID:(id)arg3;
- (void)xmppStream:(id)arg1 willUnregisterModule:(id)arg2;
- (void)xmppStream:(id)arg1 didRegisterModule:(id)arg2;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppStream:(id)arg1 didSendPresence:(id)arg2;
- (void)xmppStream:(id)arg1 didReceivePresence:(id)arg2;
- (_Bool)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)handleFetchRosterQueryIQ:(id)arg1 withInfo:(id)arg2;
- (void)fetchRoster;
- (void)rejectPresenceSubscriptionRequestFrom:(id)arg1;
- (void)acceptPresenceSubscriptionRequestFrom:(id)arg1 andAddToRoster:(_Bool)arg2;
- (void)removeUser:(id)arg1;
- (void)revokePresencePermissionFromUser:(id)arg1;
- (void)unsubscribePresenceFromUser:(id)arg1;
- (void)subscribePresenceToUser:(id)arg1 reason:(id)arg2 isAccept:(_Bool)arg3;
- (void)setNickname:(id)arg1 forUser:(id)arg2;
- (void)addUser:(id)arg1 groups:(id)arg2 reason:(id)arg3 isAccept:(_Bool)arg4 subscribeToPresence:(_Bool)arg5;
- (void)addUser:(id)arg1 groups:(id)arg2 reason:(id)arg3 isAccept:(_Bool)arg4;
- (void)addUser:(id)arg1 reason:(id)arg2 isAccept:(_Bool)arg3;
- (_Bool)isRosterItem:(id)arg1;
- (void)_addRosterItems:(id)arg1;
- (void)_setPopulatingRoster:(_Bool)arg1;
- (_Bool)_populatingRoster;
- (void)_setHasRoster:(_Bool)arg1;
- (void)_setRequestedRoster:(_Bool)arg1;
- (_Bool)_requestedRoster;
@property(readonly) _Bool hasRoster;
@property(readonly, getter=isPopulating) _Bool populating;
@property(readonly, getter=hasRequestedRoster) _Bool requestedRoster;
@property _Bool allowRosterlessOperation;
@property _Bool autoAcceptKnownPresenceSubscriptionRequests;
@property _Bool autoClearAllUsersAndResources;
@property _Bool autoFetchRoster;
@property(readonly) id <XMPPRosterStorage> xmppRosterStorage;
- (id)multicastDelegate;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)initWithRosterStorage:(id)arg1 dispatchQueue:(struct dispatch_queue_s *)arg2;
- (id)initWithRosterStorage:(id)arg1;
- (id)initWithDispatchQueue:(struct dispatch_queue_s *)arg1;
- (id)init;

@end

