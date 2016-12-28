//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface DXChatBarMoreView : UIView
{
    id <DXChatBarMoreViewDelegate> _delegate;
    UIButton *_photoButton;
    UIButton *_takePicButton;
    UIButton *_locationButton;
}

@property(retain, nonatomic) UIButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) UIButton *takePicButton; // @synthesize takePicButton=_takePicButton;
@property(retain, nonatomic) UIButton *photoButton; // @synthesize photoButton=_photoButton;
@property(nonatomic) id <DXChatBarMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)takeVideoCallAction;
- (void)takeAudioCallAction;
- (void)locationAction;
- (void)photoAction;
- (void)takePicAction;
- (void)setupSubviewsForType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;

@end

