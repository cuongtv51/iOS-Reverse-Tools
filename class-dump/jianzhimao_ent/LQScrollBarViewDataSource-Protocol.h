//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LQBarButtonItem, LQScrollBarView, NSString, UIColor, UIView;

@protocol LQScrollBarViewDataSource <NSObject>
- (UIView *)scrollBar:(LQScrollBarView *)arg1 barRelatedViewAtIndex:(unsigned long long)arg2;
- (LQBarButtonItem *)scrollBar:(LQScrollBarView *)arg1 barButtonAtIndex:(unsigned long long)arg2;
- (unsigned long long)barsCountOfScrollBar:(LQScrollBarView *)arg1;

@optional
- (UIColor *)colorOfIndicatorOfScrollBar:(LQScrollBarView *)arg1;
- (NSString *)scrollBar:(LQScrollBarView *)arg1 badgeAtIndex:(long long)arg2;
@end

