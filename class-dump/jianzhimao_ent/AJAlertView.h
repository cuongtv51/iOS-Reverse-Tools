//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AJPopupView.h"

@class NSArray, NSAttributedString, NSString, UIColor, UIView;

@interface AJAlertView : AJPopupView
{
    id <AJAlertViewDelegate> _delegate;
    NSAttributedString *_title;
    long long _titleAlignment;
    NSAttributedString *_alertContent;
    NSArray *_buttonTitles;
    NSString *_simpleTitle;
    NSArray *_simpleButtonTitles;
    CDUnknownBlockType _alertCallback;
    NSString *_simpleAlertContent;
    UIColor *_titleColor;
    id _bindData;
    long long _alertType;
    UIView *_titleView;
    UIView *_contentView;
    UIView *_buttonView;
}

@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) id bindData; // @synthesize bindData=_bindData;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *simpleAlertContent; // @synthesize simpleAlertContent=_simpleAlertContent;
@property(copy, nonatomic) CDUnknownBlockType alertCallback; // @synthesize alertCallback=_alertCallback;
@property(retain, nonatomic) NSArray *simpleButtonTitles; // @synthesize simpleButtonTitles=_simpleButtonTitles;
@property(copy, nonatomic) NSString *simpleTitle; // @synthesize simpleTitle=_simpleTitle;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(retain, nonatomic) NSAttributedString *alertContent; // @synthesize alertContent=_alertContent;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <AJAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)buttonClick:(id)arg1;
- (void)addbuttonWithAttrTitle:(id)arg1 index:(long long)arg2 btnWidth:(double)arg3;
- (void)hideTitleView;
- (void)resetView;
- (void)configButtonView;
- (void)configContentView;
- (void)configTitleView;
- (void)setupCustomView;
- (id)initWithAlertType:(long long)arg1;

@end

