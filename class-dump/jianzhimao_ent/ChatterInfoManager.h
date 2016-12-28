//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LYCache, NSObject<OS_dispatch_queue>;

@interface ChatterInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dbQueue;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // @synthesize dbQueue=_dbQueue;
- (void).cxx_destruct;
- (void)writeWithGroupMemberArray:(id)arg1;
- (void)writeWithGroupInfoArray:(id)arg1;
- (void)writeWithChatterInfoArray:(id)arg1;
- (void)writeWithChatExt:(id)arg1;
- (void)writeWithChatUserInfoBean:(id)arg1;
- (void)writeWithIMUserInfoBean:(id)arg1;
- (void)writeWithGroupInfo:(id)arg1;
- (id)readCacheWithObjClass:(Class)arg1 key:(id)arg2;
- (void)removeCacheForKey:(id)arg1 fromDisk:(_Bool)arg2;
- (void)writeCacheWithObj:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) LYCache *lyCache;
- (id)init;

@end

