//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPCoreDataStorage.h"

#import "XMPPRoomStorage.h"

@class NSArray, NSMutableSet, NSString, XMPPRoom;

@interface XMPPRoomCoreDataStorage : XMPPCoreDataStorage <XMPPRoomStorage>
{
    NSString *messageEntityName;
    NSString *occupantEntityName;
    double maxMessageAge;
    double deleteInterval;
    NSMutableSet *pausedMessageDeletion;
    unsigned long long lastDeleteTime;
    struct dispatch_source_s *deleteTimer;
    XMPPRoom *_xmppRoom;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak XMPPRoom *xmppRoom; // @dynamic xmppRoom;
@property(readonly) NSArray *admins; // @dynamic admins;
@property(readonly) NSArray *owners; // @dynamic owners;
@property(readonly) NSArray *occupants; // @dynamic occupants;
- (id)occupantForJID:(id)arg1;
- (void)handleDidLeaveRoom:(id)arg1;
- (void)handleIncomingMessage:(id)arg1 room:(id)arg2;
- (void)handleOutgoingMessage:(id)arg1 room:(id)arg2;
- (void)handlePresence:(id)arg1 room:(id)arg2;
- (id)occupantForJID:(id)arg1 stream:(id)arg2 inContext:(id)arg3;
- (id)mostRecentMessageTimestampForRoom:(id)arg1 stream:(id)arg2 inContext:(id)arg3;
- (id)occupantEntity:(id)arg1;
- (id)messageEntity:(id)arg1;
- (void)removeOccupant:(id)arg1 withPresence:(id)arg2 room:(id)arg3 stream:(id)arg4;
- (void)updateOccupant:(id)arg1 withPresence:(id)arg2 room:(id)arg3 stream:(id)arg4;
- (void)insertOccupantWithPresence:(id)arg1 room:(id)arg2 stream:(id)arg3;
- (void)didUpdateOccupant:(id)arg1;
- (void)didInsertOccupant:(id)arg1;
- (void)insertMessage:(id)arg1 outgoing:(_Bool)arg2 forRoom:(id)arg3 stream:(id)arg4;
- (void)didInsertMessage:(id)arg1;
- (_Bool)existsMessage:(id)arg1 forRoom:(id)arg2 stream:(id)arg3;
- (void)clearAllOccupantsFromRoom:(id)arg1;
- (void)createAndStartDeleteTimer;
- (void)updateDeleteTimer;
- (void)destroyDeleteTimer;
- (void)performDelete;
- (void)didCreateManagedObjectContext;
- (void)resumeOldMessageDeletionForRoom:(id)arg1;
- (void)pauseOldMessageDeletionForRoom:(id)arg1;
@property double deleteInterval;
@property double maxMessageAge;
@property(retain) NSString *occupantEntityName;
@property(retain) NSString *messageEntityName;
- (void)dealloc;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

