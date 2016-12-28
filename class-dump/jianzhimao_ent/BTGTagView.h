//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTGBaseView.h"

#import "BTGStickerViewDelegate.h"

@class BTGStickerView, NSDictionary, NSString, UIImageView, UILabel;

@interface BTGTagView : BTGBaseView <BTGStickerViewDelegate>
{
    int _type;
    int _direction;
    int _priority;
    NSDictionary *_assignee;
    id <BTGTagViewDelegate> _delegate;
    NSString *_content;
    BTGStickerView *_stickerView;
    UIImageView *_bgImageView;
    UIImageView *_typeImageView;
    UIImageView *_pinImageView;
    UIImageView *_pin2ImageView;
    UILabel *_contentLabel;
    struct CGPoint _position;
    struct CGPoint _logicPoint;
}

@property(nonatomic) struct CGPoint logicPoint; // @synthesize logicPoint=_logicPoint;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *pin2ImageView; // @synthesize pin2ImageView=_pin2ImageView;
@property(retain, nonatomic) UIImageView *pinImageView; // @synthesize pinImageView=_pinImageView;
@property(retain, nonatomic) UIImageView *typeImageView; // @synthesize typeImageView=_typeImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak BTGStickerView *stickerView; // @synthesize stickerView=_stickerView;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) __weak id <BTGTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *assignee; // @synthesize assignee=_assignee;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)dictionary;
- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)typeAnimation;
- (void)pin2Animation;
- (void)pinAnimation;
- (void)rippleAnimation:(id)arg1 key:(id)arg2;
- (void)stopAnimation;
- (void)startAnimationImmediately;
- (void)startAnimation;
- (void)stickerViewDidLongPress:(id)arg1;
- (void)stickerViewDidTap:(id)arg1;
- (void)stickerViewDidEndMoving:(id)arg1;
- (id)addToContainer:(id)arg1 position:(struct CGPoint)arg2;
- (void)initialize;
- (id)initWithType:(int)arg1 priority:(int)arg2 content:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

