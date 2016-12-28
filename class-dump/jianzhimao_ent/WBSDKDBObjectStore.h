//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WBSDKDBObjectStore : NSObject
{
    unsigned long long _bufferSize;
    Class _storeObjectClass;
    NSMutableArray *_recordBuffers;
}

+ (id)sharedStore:(Class)arg1;
@property(retain) NSMutableArray *recordBuffers; // @synthesize recordBuffers=_recordBuffers;
@property(nonatomic) Class storeObjectClass; // @synthesize storeObjectClass=_storeObjectClass;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)flushBuffers;
- (void)objectsFromTime:(double)arg1 toTime:(double)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)objectsFromDate:(id)arg1 toDate:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)deleteObjectsFromTime:(double)arg1 toTime:(double)arg2;
- (void)deleteObjectsFromDate:(id)arg1 toDate:(id)arg2;
- (void)deleteObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (void)createTableIfNeeded;
- (void)dealloc;
- (id)init;

@end

