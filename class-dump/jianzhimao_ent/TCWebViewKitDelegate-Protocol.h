//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURLRequest, TCWebViewKit;

@protocol TCWebViewKitDelegate <NSObject>

@optional
- (_Bool)shouldAutorotateWithWebkit:(TCWebViewKit *)arg1;
- (unsigned long long)supportedInterfaceOrientationsWithWebkit:(TCWebViewKit *)arg1;
- (_Bool)webViewKit:(TCWebViewKit *)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (_Bool)webViewKit:(TCWebViewKit *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)webViewKit:(TCWebViewKit *)arg1 didLoadWithNetworkError:(NSError *)arg2;
- (void)webViewKit:(TCWebViewKit *)arg1 didLoadWithContentError:(NSError *)arg2;
- (void)webViewKit:(TCWebViewKit *)arg1 didFinishedWithError:(NSError *)arg2;
@end

