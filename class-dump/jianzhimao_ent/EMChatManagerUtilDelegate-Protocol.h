//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EMChatManagerDelegateBase.h"

@class EMError, EMMessage;

@protocol EMChatManagerUtilDelegate <EMChatManagerDelegateBase>

@optional
- (void)didConnectionStateChanged:(unsigned long long)arg1;
- (void)didFetchMessageThumbnail:(EMMessage *)arg1 error:(EMError *)arg2;
- (void)didFetchMessage:(EMMessage *)arg1 error:(EMError *)arg2;
@end

