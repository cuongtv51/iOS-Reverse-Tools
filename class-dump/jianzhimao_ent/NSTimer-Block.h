//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTimer.h"

@interface NSTimer (Block)
+ (void)block_blockInvoke:(id)arg1;
+ (id)bk_scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 userInfo:(id)arg3 repeats:(_Bool)arg4;
+ (id)bk_scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
@property(readonly, copy, nonatomic) CDUnknownBlockType funcBlock;
- (void)setFuncBlock:(CDUnknownBlockType)arg1;
@end

