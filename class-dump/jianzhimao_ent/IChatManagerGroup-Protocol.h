//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IChatManagerBase.h"

@class EMCursorResult, EMGroup, EMGroupStyleSetting, NSArray, NSString;

@protocol IChatManagerGroup <IChatManagerBase>
@property(readonly, nonatomic) NSArray *groupList;
- (void)asyncUnblockGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (EMGroup *)unblockGroup:(NSString *)arg1 error:(id *)arg2;
- (void)asyncBlockGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (EMGroup *)blockGroup:(NSString *)arg1 error:(id *)arg2;
- (void)asyncSearchPublicGroupWithGroupId:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (EMGroup *)searchPublicGroupWithGroupId:(NSString *)arg1 error:(id *)arg2;
- (void)asyncApplyJoinPublicGroup:(NSString *)arg1 withGroupname:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(EMGroup *, EMError *))arg4 onQueue:(struct dispatch_queue_s *)arg5;
- (void)asyncApplyJoinPublicGroup:(NSString *)arg1 withGroupname:(NSString *)arg2 message:(NSString *)arg3;
- (EMGroup *)applyJoinPublicGroup:(NSString *)arg1 withGroupname:(NSString *)arg2 message:(NSString *)arg3 error:(id *)arg4;
- (void)asyncJoinPublicGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)asyncJoinPublicGroup:(NSString *)arg1;
- (EMGroup *)joinPublicGroup:(NSString *)arg1 error:(id *)arg2;
- (void)asyncFetchPublicGroupsFromServerWithCursor:(NSString *)arg1 pageSize:(long long)arg2 andCompletion:(void (^)(EMCursorResult *, EMError *))arg3;
- (EMCursorResult *)fetchPublicGroupsFromServerWithCursor:(NSString *)arg1 pageSize:(long long)arg2 andError:(id *)arg3;
- (void)asyncFetchAllPublicGroupsWithCompletion:(void (^)(NSArray *, EMError *))arg1 onQueue:(struct dispatch_queue_s *)arg2;
- (void)asyncFetchAllPublicGroups;
- (NSArray *)fetchAllPublicGroupsWithError:(id *)arg1;
- (void)asyncFetchMyGroupsListWithCompletion:(void (^)(NSArray *, EMError *))arg1 onQueue:(struct dispatch_queue_s *)arg2;
- (void)asyncFetchMyGroupsList;
- (NSArray *)fetchMyGroupsListWithError:(id *)arg1;
- (void)asyncFetchGroupBansList:(NSString *)arg1 completion:(void (^)(NSArray *, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)asyncFetchGroupBansList:(NSString *)arg1;
- (NSArray *)fetchGroupBansList:(NSString *)arg1 error:(id *)arg2;
- (void)asyncFetchGroupInfo:(NSString *)arg1 includesOccupantList:(_Bool)arg2 completion:(void (^)(EMGroup *, EMError *))arg3 onQueue:(struct dispatch_queue_s *)arg4;
- (void)asyncFetchGroupInfo:(NSString *)arg1 includesOccupantList:(_Bool)arg2;
- (EMGroup *)fetchGroupInfo:(NSString *)arg1 includesOccupantList:(_Bool)arg2 error:(id *)arg3;
- (void)asyncFetchOccupantList:(NSString *)arg1 completion:(void (^)(NSArray *, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)asyncFetchOccupantList:(NSString *)arg1;
- (NSArray *)fetchOccupantList:(NSString *)arg1 error:(id *)arg2;
- (void)asyncFetchGroupInfo:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)asyncFetchGroupInfo:(NSString *)arg1;
- (EMGroup *)fetchGroupInfo:(NSString *)arg1 error:(id *)arg2;
- (void)rejectApplyJoinGroup:(NSString *)arg1 groupname:(NSString *)arg2 toApplicant:(NSString *)arg3 reason:(NSString *)arg4;
- (void)asyncAcceptApplyJoinGroup:(NSString *)arg1 groupname:(NSString *)arg2 applicant:(NSString *)arg3 completion:(void (^)(EMError *))arg4 onQueue:(struct dispatch_queue_s *)arg5;
- (void)asyncAcceptApplyJoinGroup:(NSString *)arg1 groupname:(NSString *)arg2 applicant:(NSString *)arg3;
- (void)acceptApplyJoinGroup:(NSString *)arg1 groupname:(NSString *)arg2 applicant:(NSString *)arg3 error:(id *)arg4;
- (void)asyncChangeDescription:(NSString *)arg1 forGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3 onQueue:(struct dispatch_queue_s *)arg4;
- (void)asyncChangeDescription:(NSString *)arg1 forGroup:(NSString *)arg2;
- (EMGroup *)changeDescription:(NSString *)arg1 forGroup:(NSString *)arg2 error:(id *)arg3;
- (void)asyncChangeGroupSubject:(NSString *)arg1 forGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3 onQueue:(struct dispatch_queue_s *)arg4;
- (void)asyncChangeGroupSubject:(NSString *)arg1 forGroup:(NSString *)arg2;
- (EMGroup *)changeGroupSubject:(NSString *)arg1 forGroup:(NSString *)arg2 error:(id *)arg3;
- (void)asyncUnblockOccupants:(NSArray *)arg1 forGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3 onQueue:(struct dispatch_queue_s *)arg4;
- (void)asyncUnblockOccupants:(NSArray *)arg1 forGroup:(NSString *)arg2;
- (EMGroup *)unblockOccupants:(NSArray *)arg1 forGroup:(NSString *)arg2 error:(id *)arg3;
- (void)asyncBlockOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3 onQueue:(struct dispatch_queue_s *)arg4;
- (void)asyncBlockOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2;
- (EMGroup *)blockOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2 error:(id *)arg3;
- (void)asyncRemoveOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3 onQueue:(struct dispatch_queue_s *)arg4;
- (void)asyncRemoveOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2;
- (EMGroup *)removeOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2 error:(id *)arg3;
- (void)asyncAddOccupants:(NSArray *)arg1 toGroup:(NSString *)arg2 welcomeMessage:(NSString *)arg3 completion:(void (^)(NSArray *, EMGroup *, NSString *, EMError *))arg4 onQueue:(struct dispatch_queue_s *)arg5;
- (void)asyncAddOccupants:(NSArray *)arg1 toGroup:(NSString *)arg2 welcomeMessage:(NSString *)arg3;
- (EMGroup *)addOccupants:(NSArray *)arg1 toGroup:(NSString *)arg2 welcomeMessage:(NSString *)arg3 error:(id *)arg4;
- (void)asyncDestroyGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, long long, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)asyncDestroyGroup:(NSString *)arg1;
- (EMGroup *)destroyGroup:(NSString *)arg1 error:(id *)arg2;
- (void)asyncLeaveGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, long long, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)asyncLeaveGroup:(NSString *)arg1;
- (EMGroup *)leaveGroup:(NSString *)arg1 error:(id *)arg2;
- (void)asyncJoinAnonymousPublicGroup:(NSString *)arg1 nickname:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3 onQueue:(struct dispatch_queue_s *)arg4;
- (void)asyncJoinAnonymousPublicGroup:(NSString *)arg1 nickname:(NSString *)arg2;
- (EMGroup *)joinAnonymousPublicGroup:(NSString *)arg1 nickname:(NSString *)arg2 error:(id *)arg3;
- (void)asyncCreateAnonymousGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 initialWelcomeMessage:(NSString *)arg3 nickname:(NSString *)arg4 styleSetting:(EMGroupStyleSetting *)arg5 completion:(void (^)(EMGroup *, EMError *))arg6 onQueue:(struct dispatch_queue_s *)arg7;
- (void)asyncCreateAnonymousGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 initialWelcomeMessage:(NSString *)arg3 nickname:(NSString *)arg4 styleSetting:(EMGroupStyleSetting *)arg5;
- (EMGroup *)createAnonymousGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 initialWelcomeMessage:(NSString *)arg3 nickname:(NSString *)arg4 styleSetting:(EMGroupStyleSetting *)arg5 error:(id *)arg6;
- (void)asyncCreateGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 initialWelcomeMessage:(NSString *)arg4 styleSetting:(EMGroupStyleSetting *)arg5 completion:(void (^)(EMGroup *, EMError *))arg6 onQueue:(struct dispatch_queue_s *)arg7;
- (void)asyncCreateGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 initialWelcomeMessage:(NSString *)arg4 styleSetting:(EMGroupStyleSetting *)arg5;
- (EMGroup *)createGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 initialWelcomeMessage:(NSString *)arg4 styleSetting:(EMGroupStyleSetting *)arg5 error:(id *)arg6;
- (NSArray *)loadAllMyGroupsFromDatabaseWithAppend2Chat:(_Bool)arg1;

@optional
- (void)rejectInvitationForGroup:(NSString *)arg1 toInviter:(NSString *)arg2 reason:(NSString *)arg3;
- (void)asyncAcceptInvitationFromGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)asyncAcceptInvitationFromGroup:(NSString *)arg1;
- (EMGroup *)acceptInvitationFromGroup:(NSString *)arg1 error:(id *)arg2;
- (void)asyncFetchAllPrivateGroupsWithCompletion:(void (^)(NSArray *, EMError *))arg1 onQueue:(struct dispatch_queue_s *)arg2;
- (void)asyncFetchAllPrivateGroups;
- (NSArray *)fetchAllPrivateGroupsWithError:(id *)arg1;
- (void)asyncChangeAffiliation:(long long)arg1 forOccupants:(NSArray *)arg2 inGroup:(NSString *)arg3 completion:(void (^)(EMGroup *, EMError *))arg4 onQueue:(struct dispatch_queue_s *)arg5;
- (void)asyncChangeAffiliation:(long long)arg1 forOccupants:(NSArray *)arg2 inGroup:(NSString *)arg3;
- (EMGroup *)changeAffiliation:(long long)arg1 forOccupants:(NSArray *)arg2 inGroup:(NSString *)arg3 error:(id *)arg4;
- (void)asyncChangePassword:(NSString *)arg1 forGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3 onQueue:(struct dispatch_queue_s *)arg4;
- (void)asyncChangePassword:(NSString *)arg1 forGroup:(NSString *)arg2;
- (EMGroup *)changePassword:(NSString *)arg1 forGroup:(NSString *)arg2 error:(id *)arg3;
- (void)asyncCreatePublicGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 initialWelcomeMessage:(NSString *)arg4 completion:(void (^)(EMGroup *, EMError *))arg5 onQueue:(struct dispatch_queue_s *)arg6;
- (void)asyncCreatePublicGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 initialWelcomeMessage:(NSString *)arg4;
- (EMGroup *)createPublicGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 initialWelcomeMessage:(NSString *)arg4 error:(id *)arg5;
- (void)asyncCreatePrivateGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 initialWelcomeMessage:(NSString *)arg4 completion:(void (^)(EMGroup *, EMError *))arg5 onQueue:(struct dispatch_queue_s *)arg6;
- (void)asyncCreatePrivateGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 initialWelcomeMessage:(NSString *)arg4;
- (EMGroup *)createPrivateGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 initialWelcomeMessage:(NSString *)arg4 error:(id *)arg5;
- (NSArray *)loadAllMyGroupsFromDatabase;
@end

