//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ChatSendHelper : NSObject
{
}

+ (id)getUserInfoAttribute;
+ (id)build_em_apns_ext:(id)arg1 ext:(id)arg2;
+ (id)sendMessage:(id)arg1 messageBody:(id)arg2 messageType:(long long)arg3 requireEncryption:(_Bool)arg4 ext:(id)arg5;
+ (id)sendLocationLatitude:(double)arg1 longitude:(double)arg2 address:(id)arg3 toUsername:(id)arg4 messageType:(long long)arg5 requireEncryption:(_Bool)arg6 ext:(id)arg7;
+ (id)sendVideo:(id)arg1 toUsername:(id)arg2 messageType:(long long)arg3 requireEncryption:(_Bool)arg4 ext:(id)arg5;
+ (id)sendVoice:(id)arg1 toUsername:(id)arg2 messageType:(long long)arg3 requireEncryption:(_Bool)arg4 ext:(id)arg5;
+ (id)sendImageMessageWithImage:(id)arg1 toUsername:(id)arg2 messageType:(long long)arg3 requireEncryption:(_Bool)arg4 ext:(id)arg5;
+ (id)sendTextMessageWithString:(id)arg1 toUsername:(id)arg2 messageType:(long long)arg3 requireEncryption:(_Bool)arg4 ext:(id)arg5;

@end

