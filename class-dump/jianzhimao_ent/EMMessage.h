//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class EMConversation, NSArray, NSDictionary, NSMutableArray, NSString;

@interface EMMessage : NSObject <NSCoding>
{
    _Bool _isOfflineMessage;
    NSMutableArray *_bodies;
    NSObject *_bodiesLock;
    _Bool _requireEncryption;
    _Bool _isRead;
    _Bool _isEncryptedOnServer;
    _Bool _isAnonymous;
    _Bool _isReadAcked;
    _Bool _isDeliveredAcked;
    _Bool _isAcked;
    _Bool _isDelivered;
    NSString *_from;
    NSString *_to;
    NSString *_messageId;
    long long _timestamp;
    NSString *_conversationChatter;
    NSString *_groupSenderName;
    NSDictionary *_ext;
    long long _deliveryState;
    EMConversation *_conversation;
    long long _messageType;
}

+ (id)createMessageBodyFromBodyDict:(id)arg1 messageDict:(id)arg2 isGroup:(_Bool)arg3;
+ (long long)_messageBodyTypeFromString:(id)arg1;
+ (id)_createCommandMessageBodyFromBodyDict:(id)arg1 messageDict:(id)arg2 isGroup:(_Bool)arg3;
+ (id)_createFileMessageBodyFromBodyDict:(id)arg1 messageDict:(id)arg2 isGroup:(_Bool)arg3;
+ (id)_createVideoMessageBodyFromBodyDict:(id)arg1 messageDict:(id)arg2 isGroup:(_Bool)arg3;
+ (id)_createLocationMessageBodyFromBodyDict:(id)arg1 messageDict:(id)arg2 isGroup:(_Bool)arg3;
+ (id)_createVoiceMessageBodyFromBodyDict:(id)arg1 messageDict:(id)arg2 isGroup:(_Bool)arg3;
+ (id)_createImageMessageBodyFromBodyDict:(id)arg1 messageDict:(id)arg2 isGroup:(_Bool)arg3;
+ (struct CGSize)_calculateThumbSize:(struct CGSize)arg1;
+ (id)_createTextMessageBodyFromBodyDict:(id)arg1 messageDict:(id)arg2 isGroup:(_Bool)arg3;
+ (id)createBodyDictFromMessageBody:(id)arg1;
+ (id)_createBodyDictFromVoiceMessageBody:(id)arg1;
+ (id)_createBodyDictFromVideoMessageBody:(id)arg1;
+ (id)_createBodyDictFromTextMessageBody:(id)arg1;
+ (id)_createBodyDictFromLocationMessageBody:(id)arg1;
+ (id)_createBodyDictFromImageMessageBody:(id)arg1;
+ (id)_createBodyDictFromFileMessageBody:(id)arg1;
+ (id)_createBodyDictFromCommandMessageBody:(id)arg1;
+ (id)createMessageBodysFromDicts:(id)arg1;
+ (id)_createVoiceMessageBodyFromDict:(id)arg1;
+ (id)_createVideoMessageBodyFromDict:(id)arg1;
+ (id)_createTextMessageBodyFromDict:(id)arg1;
+ (id)_createLocationMessageBodyFromDict:(id)arg1;
+ (id)_createImageMessageBodyFromDict:(id)arg1;
+ (id)_createFileMessageBodyFromDict:(id)arg1;
+ (id)_createCommandMessageBodyFromDict:(id)arg1;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) __weak EMConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) _Bool isDeliveredAcked; // @synthesize isDeliveredAcked=_isDeliveredAcked;
@property(nonatomic) _Bool isReadAcked; // @synthesize isReadAcked=_isReadAcked;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(nonatomic) long long deliveryState; // @synthesize deliveryState=_deliveryState;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *groupSenderName; // @synthesize groupSenderName=_groupSenderName;
@property(nonatomic) _Bool isEncryptedOnServer; // @synthesize isEncryptedOnServer=_isEncryptedOnServer;
@property(retain, nonatomic) NSString *conversationChatter; // @synthesize conversationChatter=_conversationChatter;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool requireEncryption; // @synthesize requireEncryption=_requireEncryption;
@property(readonly, nonatomic) _Bool isOfflineMessage; // @synthesize isOfflineMessage=_isOfflineMessage;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (_Bool)updateMessageStatusFailedToDB;
- (_Bool)updateMessageBodiesToDB;
- (_Bool)updateMessageExtToDB;
- (_Bool)updateMessageDeliveryStateToDB;
- (id)removeMessageBody:(id)arg1;
- (id)addMessageBody:(id)arg1;
@property(nonatomic) _Bool isDelivered; // @synthesize isDelivered=_isDelivered;
@property(nonatomic) _Bool isAcked; // @synthesize isAcked=_isAcked;
@property(retain, nonatomic) NSArray *messageBodies; // @dynamic messageBodies;
- (id)description;
@property(nonatomic) _Bool isGroup;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithReceiver:(id)arg1 sender:(id)arg2 bodies:(id)arg3;
- (id)initMessageWithID:(id)arg1 sender:(id)arg2 receiver:(id)arg3 bodies:(id)arg4;
- (id)initWithReceiver:(id)arg1 bodies:(id)arg2;
- (id)init;
- (id)createMessageBodyDictFromBody:(id)arg1;
- (id)_createVoiceMessageBodyDictFromBody:(id)arg1;
- (id)_createVideoMessageBodyDictFromBody:(id)arg1;
- (id)_createTextMessageBodyDictFromBody:(id)arg1;
- (id)_createLocationMessageBodyDictFromBody:(id)arg1;
- (id)_createImageMessageBodyDictFromBody:(id)arg1;
- (id)_createFileMessageBodyDictFromBody:(id)arg1;
- (id)_createCommandMessageBodyDictFromBody:(id)arg1;
- (_Bool)changeBodiesDownloadStatusFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)setIsOfflineMessage:(_Bool)arg1;

@end

