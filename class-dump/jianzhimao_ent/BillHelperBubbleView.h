//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EMChatBaseBubbleView.h"

@class NSArray, NSDataDetector, UIImageView, UILabel, UIView;

@interface BillHelperBubbleView : EMChatBaseBubbleView
{
    NSDataDetector *_detector;
    NSArray *_urlMatches;
    UIImageView *_billHelperBgView;
    UILabel *_titleLab;
    UILabel *_contentLab;
    UIImageView *_lineView;
    UIView *_bottomView;
    UILabel *_actionLab;
    UIImageView *_arrawView;
}

+ (long long)textLabelLineBreakModel;
+ (double)lineSpacing;
+ (id)textLabelFont;
+ (double)heightForBubbleWithObject:(id)arg1;
@property(retain, nonatomic) UIImageView *arrawView; // @synthesize arrawView=_arrawView;
@property(retain, nonatomic) UILabel *actionLab; // @synthesize actionLab=_actionLab;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *contentLab; // @synthesize contentLab=_contentLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *billHelperBgView; // @synthesize billHelperBgView=_billHelperBgView;
- (void).cxx_destruct;
- (void)bubbleViewPressed:(id)arg1;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (void)highlightLinksWithIndex:(long long)arg1;
- (_Bool)isIndex:(long long)arg1 inRange:(struct _NSRange)arg2;
- (void)setModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

