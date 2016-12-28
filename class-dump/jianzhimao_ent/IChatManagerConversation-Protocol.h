//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IChatManagerBase.h"

@class EMConversation, EMMessage, NSArray, NSString;

@protocol IChatManagerConversation <IChatManagerBase>

@optional
@property(readonly, nonatomic) NSArray *conversations;
- (long long)saveMessages:(NSArray *)arg1;
- (_Bool)importMessage:(EMMessage *)arg1 append2Chat:(_Bool)arg2;
- (_Bool)saveMessage:(EMMessage *)arg1;
- (unsigned long long)totalUnreadMessagesCount;
- (unsigned long long)unreadConversationsCount;
- (_Bool)removeAllConversationsWithDeleteMessages:(_Bool)arg1;
- (unsigned long long)removeConversationsByChatters:(NSArray *)arg1 deleteMessages:(_Bool)arg2;
- (_Bool)removeConversationByChatter:(NSString *)arg1 deleteMessages:(_Bool)arg2;
- (long long)saveAllConversations;
- (NSArray *)loadAllConversationsFromDatabase;
- (NSArray *)loadAllConversations;
- (EMConversation *)conversationForChatter:(NSString *)arg1 isGroup:(_Bool)arg2;
- (_Bool)insertMessagesToDB:(NSArray *)arg1 forChatter:(NSString *)arg2 append2Chat:(_Bool)arg3;
- (long long)insertMessagesToDB:(NSArray *)arg1;
- (_Bool)insertMessageToDB:(EMMessage *)arg1 append2Chat:(_Bool)arg2;
- (_Bool)insertMessageToDB:(EMMessage *)arg1;
- (NSArray *)searchMessagesWithCriteria:(NSString *)arg1 withChatter:(NSString *)arg2;
- (NSArray *)searchMessagesWithCriteria:(NSString *)arg1;
- (unsigned long long)unreadMessagesCountForConversation:(NSString *)arg1;
- (unsigned long long)loadTotalUnreadMessagesCountFromDatabase;
- (_Bool)removeAllConversationsWithDeleteMessages:(_Bool)arg1 append2Chat:(_Bool)arg2;
- (unsigned long long)removeConversationsByChatters:(NSArray *)arg1 deleteMessages:(_Bool)arg2 append2Chat:(_Bool)arg3;
- (_Bool)removeConversationByChatter:(NSString *)arg1 deleteMessages:(_Bool)arg2 append2Chat:(_Bool)arg3;
- (long long)insertConversationsToDB:(NSArray *)arg1 append2Chat:(_Bool)arg2;
- (_Bool)insertConversationToDB:(EMConversation *)arg1 append2Chat:(_Bool)arg2;
- (NSArray *)loadAllConversationsFromDatabaseWithAppend2Chat:(_Bool)arg1;
- (EMConversation *)conversationForChatter:(NSString *)arg1 conversationType:(long long)arg2;
@end

