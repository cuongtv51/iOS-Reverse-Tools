//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<JPFUdpSocketDelegate>, NSTimer;

@interface JPFUdpSocket : NSObject
{
    NSMutableArray *_sendQueue;
    struct __CFSocket *_socket;
    struct __CFRunLoopSource *_rls;
    unsigned char _receiveBuffer[16384];
    NSTimer *_recvTimeoutTimer;
    _Bool _isSetuped;
    _Bool _isConnected;
    NSObject<JPFUdpSocketDelegate> *_delegate;
}

@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) NSObject<JPFUdpSocketDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)delayedDidNotReceivedDataWithError:(id)arg1;
- (void)delayedDidReceivedData:(id)arg1;
- (void)delayedDidNotSendData:(id)arg1;
- (void)delayedDidSendData:(id)arg1;
- (void)receiveTimeout:(id)arg1;
- (void)timeoutWithUdpPacket:(id)arg1;
- (id)dequeueFromSendQueue;
- (void)enqueueToSendQueue:(id)arg1;
- (void)reenableSocketCallbacks;
- (void)doRecv:(struct __CFSocket *)arg1;
- (void)doSend:(struct __CFSocket *)arg1;
- (void)doCFSocketCallback:(unsigned long long)arg1 forSocket:(struct __CFSocket *)arg2 withAddress:(id)arg3 withData:(const void *)arg4;
- (unsigned long long)sendQueueCount;
- (void)stopReceiveTimeoutTimer;
- (void)receiveDataWithTimeout:(double)arg1;
- (_Bool)sendData:(id)arg1 toHost:(id)arg2 port:(unsigned short)arg3 withTimeout:(double)arg4;
- (_Bool)connectToHost:(id)arg1 toPort:(unsigned short)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

