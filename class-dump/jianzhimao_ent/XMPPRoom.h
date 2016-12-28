//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class EMGroupInternal, EMGroupStyleSetting, NSMutableArray, NSString, XMPPIDTracker, XMPPJID;

@interface XMPPRoom : XMPPModule
{
    id <XMPPRoomStorage> xmppRoomStorage;
    XMPPJID *roomJID;
    XMPPJID *myRoomJID;
    NSString *myNickname;
    NSString *myOldNickname;
    NSString *roomSubject;
    XMPPIDTracker *responseTracker;
    unsigned short state;
    NSString *prevRoomSubject;
    NSString *roomDescription;
    NSString *prevRoomDescription;
    NSString *roomPassword;
    NSString *prevPassword;
    NSString *roomName;
    NSString *prevRoomName;
    XMPPJID *_beKickedOccupant;
    XMPPJID *_beBlockedOccupant;
    XMPPJID *_beUnblockedOccupant;
    XMPPJID *_beChangedAffiliationOccupant;
    NSString *_beChangedAffiliationOccupantNewAffiliation;
    _Bool _isDestroyingChatroom;
    _Bool isLeavingRoom;
    EMGroupStyleSetting *roomSetting;
    long long roomOccupantsCount;
    long long roomOnlineOccupantsCount;
    NSMutableArray *_owners;
    NSMutableArray *_admins;
    NSMutableArray *_members;
    NSMutableArray *_bans;
    EMGroupInternal *_groupInternal;
}

+ (id)itemWithRole:(id)arg1 username:(id)arg2;
+ (id)itemWithRole:(id)arg1 jid:(id)arg2;
+ (id)itemWithAffiliation:(id)arg1 jid:(id)arg2;
@property(nonatomic) __weak EMGroupInternal *groupInternal; // @synthesize groupInternal=_groupInternal;
@property(retain, nonatomic) NSMutableArray *bans; // @synthesize bans=_bans;
@property(retain, nonatomic) NSMutableArray *members; // @synthesize members=_members;
@property(retain, nonatomic) NSMutableArray *admins; // @synthesize admins=_admins;
@property(retain, nonatomic) NSMutableArray *owners; // @synthesize owners=_owners;
@property(nonatomic) long long roomOnlineOccupantsCount; // @synthesize roomOnlineOccupantsCount;
@property(nonatomic) long long roomOccupantsCount; // @synthesize roomOccupantsCount;
@property(retain, nonatomic) EMGroupStyleSetting *roomSetting; // @synthesize roomSetting;
@property(nonatomic) _Bool isLeavingRoom; // @synthesize isLeavingRoom;
- (void).cxx_destruct;
- (_Bool)isNeedJoin;
- (void)fetchBanListOnly;
- (void)fetchOwnerListOnly;
- (void)searchRoom;
- (void)handleSearchRoomRoughInfoResponse:(id)arg1 withInfo:(id)arg2;
- (void)sendApplyJoinFrom:(id)arg1 to:(id)arg2 roomName:(id)arg3 message:(id)arg4;
- (void)_fetchOccupantsByAffiliationType:(id)arg1 extString:(id)arg2;
- (void)handleFetchOccupantsByAffiliationResponse:(id)arg1 withInfo:(id)arg2;
- (void)_addOccupants:(id)arg1 forAffiliation:(id)arg2;
- (void)handleFetchRoomRoughInfoResponse:(id)arg1 withInfo:(id)arg2;
- (void)fetchRoomInfoWithOccupants:(_Bool)arg1;
- (void)kickOccupants:(id)arg1;
- (void)kickOccupantsWithUsername:(id)arg1;
- (void)handleKickOccupantsResponse:(id)arg1 withInfo:(id)arg2;
- (void)unblockOccupants:(id)arg1;
- (void)handleUnblockOccupantsResponse:(id)arg1 withInfo:(id)arg2;
- (void)blockOccupants:(id)arg1;
- (void)handleBlockOccupantsResponse:(id)arg1 withInfo:(id)arg2;
- (void)continueChangeRoomDescription:(id)arg1 withIQ:(id)arg2;
- (void)changeDescription:(id)arg1;
- (void)handleChangeDescriptionResponse:(id)arg1 withInfo:(id)arg2;
- (void)continueChangeRoomName:(id)arg1 withIQ:(id)arg2;
- (void)changeRoomName:(id)arg1;
- (void)handleChangeRoomNameResponse:(id)arg1 withInfo:(id)arg2;
- (void)changeAffiliation:(id)arg1 forOccupants:(id)arg2;
- (void)handleChangeAffiliationsResponse:(id)arg1 withInfo:(id)arg2;
- (void)createRoomWithNickname:(id)arg1;
- (id)_editRoomPrivileges:(id)arg1 elementId:(id)arg2;
- (void)_configureRoomUsingOptions:(id)arg1 elementId:(id)arg2;
- (void)_fetchConfigurationFormWithElementId:(id)arg1;
- (void)_joinRoomUsingNickname:(id)arg1 history:(id)arg2 password:(id)arg3 isCreate:(_Bool)arg4;
- (_Bool)_isLeaveRoomPresence:(id)arg1;
- (_Bool)_isDestroyRoomPresence:(id)arg1;
@property(nonatomic) _Bool isJoining; // @dynamic isJoining;
@property(nonatomic) _Bool isJoined; // @dynamic isJoined;
@property(retain, nonatomic) NSString *roomDescription; // @dynamic roomDescription;
@property(retain, nonatomic) NSString *roomSubject; // @dynamic roomSubject;
- (id)xmppStream;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppStream:(id)arg1 didReceivePresence:(id)arg2;
- (_Bool)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)sendMessageWithBody:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)inviteUser:(id)arg1 withMessage:(id)arg2;
- (void)destroyRoom;
- (void)handleDestroyRoomResponse:(id)arg1 withInfo:(id)arg2;
- (void)leaveRoom;
- (void)handleEditRoomPrivilegesResponse:(id)arg1 withInfo:(id)arg2;
- (id)editRoomPrivileges:(id)arg1;
- (void)fetchAllMembersList;
- (void)fetchAdminsList;
- (void)fetchOwnersList;
- (void)fetchMembersList;
- (void)fetchBanList;
- (void)changeRoomSubject:(id)arg1;
- (void)changeNickname:(id)arg1;
- (void)configureRoomUsingOptions:(id)arg1;
- (void)handleConfigureRoomResponse:(id)arg1 withInfo:(id)arg2;
- (void)fetchConfigurationForm;
- (void)handleConfigurationFormResponse:(id)arg1 withInfo:(id)arg2;
- (void)joinRoomUsingNickname:(id)arg1 history:(id)arg2 password:(id)arg3;
- (void)joinRoomUsingNickname:(id)arg1 history:(id)arg2;
- (_Bool)preJoinWithNickname:(id)arg1;
@property(readonly, nonatomic) NSString *myNickname; // @dynamic myNickname;
@property(readonly, nonatomic) XMPPJID *myRoomJID; // @dynamic myRoomJID;
@property(readonly, nonatomic) XMPPJID *roomJID; // @dynamic roomJID;
@property(readonly, nonatomic) id <XMPPRoomStorage> xmppRoomStorage; // @dynamic xmppRoomStorage;
- (id)multicastDelegate;
- (struct dispatch_queue_s *)moduleQueue;
- (void)dealloc;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)initWithRoomStorage:(id)arg1 jid:(id)arg2 dispatchQueue:(struct dispatch_queue_s *)arg3;
- (id)initWithRoomStorage:(id)arg1 jid:(id)arg2;
- (id)initWithDispatchQueue:(struct dispatch_queue_s *)arg1;
- (id)init;

@end

