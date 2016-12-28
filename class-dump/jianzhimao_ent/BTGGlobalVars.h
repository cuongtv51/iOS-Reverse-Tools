//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class BTGAppInfo, BTGDeviceInfo, BugtagsOptions, CLLocationManager, NSArray, NSDictionary, NSMutableDictionary, NSString, UIViewController, UIWindow;

@interface BTGGlobalVars : NSObject <CLLocationManagerDelegate>
{
    _Bool _trackingUserLocation;
    _Bool _uploadDataOnlyViaWiFi;
    int _invocationEvent;
    NSArray *_members;
    NSString *_appKey;
    unsigned long long _supportedInterfaceOrientations;
    BugtagsOptions *_bugtagsOptions;
    NSString *_accessToken;
    NSDictionary *_user;
    NSDictionary *_settings;
    CDUnknownBlockType _beforeSendingCallback;
    CDUnknownBlockType _afterSendingCallback;
    BTGDeviceInfo *_deviceInfo;
    BTGAppInfo *_appInfo;
    NSMutableDictionary *_userData;
    UIWindow *_rootView;
    UIViewController *_rootViewController;
    NSString *_sdkVersion;
    CLLocationManager *_locationManager;
    long long _orientation;
    struct CGRect _bounds;
    struct CGRect _realBounds;
}

+ (id)sharedInstance;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct CGRect realBounds; // @synthesize realBounds=_realBounds;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(nonatomic) _Bool uploadDataOnlyViaWiFi; // @synthesize uploadDataOnlyViaWiFi=_uploadDataOnlyViaWiFi;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak UIWindow *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) BTGAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) BTGDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(copy, nonatomic) CDUnknownBlockType afterSendingCallback; // @synthesize afterSendingCallback=_afterSendingCallback;
@property(copy, nonatomic) CDUnknownBlockType beforeSendingCallback; // @synthesize beforeSendingCallback=_beforeSendingCallback;
@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSDictionary *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) BugtagsOptions *bugtagsOptions; // @synthesize bugtagsOptions=_bugtagsOptions;
@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(nonatomic, getter=isTrackingUserLocation) _Bool trackingUserLocation; // @synthesize trackingUserLocation=_trackingUserLocation;
@property(nonatomic) int invocationEvent; // @synthesize invocationEvent=_invocationEvent;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (void)purge;
- (id)generateAppKeySignature;
- (void)startWithAppKey:(id)arg1 invocationEvent:(int)arg2 options:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)viewControllerForStatusBarHidden;
- (id)viewControllerForStatusBarStyle;
- (id)currentViewController;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
- (_Bool)shouldAutorotate;
- (void)reloadRootView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

