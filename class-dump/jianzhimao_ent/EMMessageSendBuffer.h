//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EMChatManagerDelegate.h"

@class EMNetworkMonitor, NSMutableDictionary, NSString;

@interface EMMessageSendBuffer : NSObject <EMChatManagerDelegate>
{
    EMNetworkMonitor *_networkMonitor;
    NSMutableDictionary *_semaphoreDictionary;
    NSMutableDictionary *_messageDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *messageDictionary; // @synthesize messageDictionary=_messageDictionary;
@property(retain, nonatomic) NSMutableDictionary *semaphoreDictionary; // @synthesize semaphoreDictionary=_semaphoreDictionary;
@property(retain, nonatomic) EMNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
- (void).cxx_destruct;
- (void)clearAllBuffer;
- (void)sendAllSemaphoreSignal;
- (void)didLoginWithInfo:(id)arg1 error:(id)arg2;
- (void)didAutoReconnectFinishedWithError:(id)arg1;
- (void)willAutoReconnect;
- (void)didConnectionStateChanged:(unsigned long long)arg1;
- (void)addMessageToBuffer:(id)arg1 timeOut:(double)arg2;
- (void)activeWithChatManager:(id)arg1;
- (id)initWithNetworkMonitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

