//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTGBaseView.h"

@class UIButton, UILabel, UIView;

@interface BTGTagTipsView : BTGBaseView
{
    UILabel *_titleLabel;
    UILabel *_step1Label;
    UILabel *_step2Label;
    UILabel *_step3Label;
    UIButton *_submitButton;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) __weak UILabel *step3Label; // @synthesize step3Label=_step3Label;
@property(nonatomic) __weak UILabel *step2Label; // @synthesize step2Label=_step2Label;
@property(nonatomic) __weak UILabel *step1Label; // @synthesize step1Label=_step1Label;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onSubmitClick:(id)arg1;
- (void)showInView:(id)arg1;
- (void)awakeFromNib;
- (void)initialize;

@end
