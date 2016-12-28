//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatBaseCell.h"

@class UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface ChatCell : ChatBaseCell
{
    UIActivityIndicatorView *_activtiy;
    UIView *_activityView;
    UIButton *_retryButton;
    UILabel *_hasRead;
}

+ (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 withObject:(id)arg3;
+ (double)bubbleViewHeightForMessageModel:(id)arg1;
@property(retain, nonatomic) UILabel *hasRead; // @synthesize hasRead=_hasRead;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIActivityIndicatorView *activtiy; // @synthesize activtiy=_activtiy;
- (void).cxx_destruct;
- (id)bubbleViewForMessageModel:(id)arg1;
- (void)setupSubviewsForMessageModel:(id)arg1;
- (void)retryButtonPressed:(id)arg1;
- (void)setMessageModel:(id)arg1;
- (void)layoutSubviews;
- (_Bool)canBecomeFirstResponder;
- (id)initWithMessageModel:(id)arg1 reuseIdentifier:(id)arg2;

@end

