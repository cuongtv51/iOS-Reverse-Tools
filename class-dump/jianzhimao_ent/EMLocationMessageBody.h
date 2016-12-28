//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEMMessageBody.h"

@class EMLocationMessageBodyInternal, EMMessage, NSString;

@interface EMLocationMessageBody : NSObject <IEMMessageBody>
{
    EMLocationMessageBodyInternal *_internal;
}

- (void).cxx_destruct;
@property(nonatomic) __weak EMMessage *message; // @dynamic message;
@property(readonly, nonatomic) long long messageBodyType; // @dynamic messageBodyType;
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(readonly, nonatomic) id <IEMChatObject> chatObject; // @dynamic chatObject;
- (id)initWithChatObject:(id)arg1;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

