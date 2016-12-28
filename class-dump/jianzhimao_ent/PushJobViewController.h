//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "AJAlertViewDelegate.h"

@class NSString, NSTimer, UICountingLabel, UIView;

@interface PushJobViewController : BaseNavViewController <AJAlertViewDelegate>
{
    _Bool _isEndPage;
    long long _pushCount;
    UIView *_pushProgressView;
    UICountingLabel *_currentPushCountLabel;
    UIView *_progressView;
    double _currentWidth;
    double _updateWidthRate;
    NSTimer *_progressTimer;
    double _progress;
    double _lastUpdate;
}

@property(nonatomic) _Bool isEndPage; // @synthesize isEndPage=_isEndPage;
@property(nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(nonatomic) double updateWidthRate; // @synthesize updateWidthRate=_updateWidthRate;
@property(nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UICountingLabel *currentPushCountLabel; // @synthesize currentPushCountLabel=_currentPushCountLabel;
@property(nonatomic) __weak UIView *pushProgressView; // @synthesize pushProgressView=_pushProgressView;
@property(nonatomic) long long pushCount; // @synthesize pushCount=_pushCount;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 buttonClick:(long long)arg2;
- (void)showAlert;
- (void)refreshProgress;
- (void)startToCountDown;
- (void)updateUI:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

